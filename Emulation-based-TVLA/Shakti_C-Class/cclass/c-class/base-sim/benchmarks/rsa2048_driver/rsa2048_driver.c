#include "util.h"
#include "sha_driver.h"
#define RSA_LEN 8

void pad_v1_5(void *source, void *dest, uint64_t size_p, int sign){
  volatile uint64_t* ptrp = source;
  volatile uint64_t* ptro = dest;
  uint64_t one = 1;
  uint64_t zero = 0;

  int tot_size = RSA_LEN;

  for(int i=0; i<tot_size; i=i+1){
    if((64*(i+1)<=size_p)&&(64*(i)<size_p)){
      *(ptro+i) = *(ptrp+i);
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)>(size_p+8))&&(64*i<size_p)&&(i!=(tot_size-1))){
      uint64_t data = *(ptrp+i);
      uint64_t mod = ((one<<(size_p-64*i))-1)&data;
      mod = ((~zero)<<(size_p+8-64*i))|mod;
      *(ptro+i) = mod;
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)>(size_p+8))&&(64*i<size_p)&&(i==(tot_size-1))){
      uint64_t data = *(ptrp+i);
      uint64_t mod = ((one<<(size_p-64*i))-1)&data;
      if(sign==0)
        mod = (((~zero)<<(size_p+8-64*i))|mod)&((one<<(64-15))-1);
      else
        mod = (((~zero)<<(size_p+8-64*i))|mod)&(((one<<(64-16))-1)|(one<<(64-15)));
      *(ptro+i) = mod;
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)<(size_p+8))&&(64*i<(size_p))&&(i!=(tot_size-1))){
      uint64_t data = *(ptrp+i);
      uint64_t mod = ((one<<(size_p-64*i))-one)&data;
      *(ptro+i) = mod;
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)<(size_p+8))&&(64*i<(size_p))&&(i==(tot_size-1))){
      uint64_t data = *(ptrp+i);
      uint64_t mod;
      if(sign==0)
        mod = (((one<<(size_p-64*i))-one)&data)&((one<<(64-15))-1);
      else
        mod = (((one<<(size_p-64*i))-one)&data)&(((one<<(64-16))-1)|(one<<(64-15)));
      *(ptro+i) = mod;
    }
    else if((64*(i)<(size_p+8))&&(64*(i)<size_p)&&(64*(i+1)>(size_p))&&(i!=(tot_size-1))){
      *(ptro+i) = ((((~zero)<<((64*i)-size_p))));
    }
    else if((64*(i)<(size_p+8))&&(64*(i)>size_p)&&(64*(i+1)>(size_p))&&(i==(tot_size-1))){
      if(sign==0)
        *(ptro+i) = (((((~zero)<<(64*i-size_p)))))&((one<<(64-15))-1);
      else
        *(ptro+i) = (((((~zero)<<(64*i-size_p)))))&(((one<<(64-16))-1)|(one<<(64-15)));
    }
    else if((64*(i)<=(size_p+8))&&(64*(i)<=size_p)&&(64*(i+1)>=(size_p))&&(i!=(tot_size-1))){
      *(ptro+i) = ~zero;
    }
    else if((64*(i)<=(size_p+8))&&(64*(i)<=size_p)&&(64*(i+1)>=(size_p))&&(i==(tot_size-1))){
      if(sign==0)
        *(ptro+i) = (~zero)&((one<<(64-15))-one);
      else
        *(ptro+i) = (~zero)&(((one<<(64-16))-1)|(one<<(64-15)));
    }
    else if(((64*(i)>=size_p)&&(64*(i+1)>=(size_p))&&(i!=(tot_size-1)))){
      *(ptro+i) = (~zero);
    }
    else if(((64*(i)>=size_p)&&(64*(i+1)>=(size_p))&&(i==(tot_size-1)))){
      if(sign==0)
        *(ptro+i) = (~zero)&((one<<(64-15))-one);
      else
        *(ptro+i) = (~zero)&(((one<<(64-16))-1)|(one<<(64-15)));
    }
  }
}

void rsa2048_v1_5(void* source_p, void* source_key_exp, void* source_key_mod, void* source_r_sqr, void* dest, int size_p, int size_m, int sign){
  volatile uint64_t arr[RSA_LEN] = {0,0,0,0,0,0,0,0};
  volatile uint64_t* ptrp = arr;
  volatile uint64_t* ptre = source_key_exp;
  volatile uint64_t* ptrm = source_key_mod;
  volatile uint64_t* ptrr = source_r_sqr;
  volatile uint64_t* ptr_out = dest;
  volatile uint64_t* mme_plaintext=(uint64_t*) 0x00021300;
  volatile uint64_t* mme_exp      =(uint64_t*) 0x00021320;
  volatile uint64_t* mme_mod      =(uint64_t*) 0x00021340;
  volatile uint64_t* mme_rsqr     =(uint64_t*) 0x00021360;
  volatile uint64_t* mme_out      =(uint64_t*) 0x00021380;
  volatile uint8_t*  mme_status   =(uint8_t*)  0x000213c0;
  
  uint64_t tot_size = RSA_LEN;
  //uint64_t tot_size = 32;

  //EXP
  for(int i=0; i<tot_size; i=i+1){
    if(i<2){
      *mme_exp = *(ptre+i);
    }
    else
      *mme_exp = 0;
  }
  
  pad_v1_5(source_p, ptrp, size_p, sign);
  for(int i=0; i<tot_size; i=i+1)
    *mme_plaintext = *(ptrp+i);

  //MOD
  for(int i=0; i<tot_size; i=i+1){
    if((64*(i+1)<=size_m)&&(64*(i)<size_m)){
      *mme_mod = *(ptrm+i);
    }
    else if((64*(i+1)>=size_m)&&(64*i<(size_m))){
      uint64_t data = *(ptrm+i);
      uint64_t one = 1;
      uint64_t zero = 0;
      uint64_t mod = ((one<<(size_m-64*i))-one)&data;
      //uint64_t mod = ~(one<<(size_m-64*i)-one);
      *mme_mod = mod;
    }
    else
      *mme_mod = 0;
  }
  //RSQR
  for(int i=0; i<tot_size; i=i+1){
    *mme_rsqr = *(ptrr+i);
  }
  //WAIT
  while(*mme_status==0);
  //OUT
  for(int i=0; i<tot_size; i=i+1){
    *(ptr_out+i) = *mme_out;
  }
}

int rsa2048_v1_5_verif(void* source_m, void* source_sig, void* source_pubkey_exp, void* source_pubkey_mod, void* source_r_sqr, int size_m, int size_mod){
  uint64_t temp[4];
  compute_hash(source_m, temp, size_m);
  uint64_t temp_sig[RSA_LEN];
  rsa2048_v1_5(temp,source_pubkey_exp,source_pubkey_mod, source_r_sqr, temp_sig, 256, size_mod, 0);
  return memcmp(source_sig, temp_sig, 64*RSA_LEN);
}
void rsa2048_v1_5_sign(void* source_p, void* source_key_exp, void* source_key_mod, void* source_r_sqr, void* dest, int size_p, int size_m){
  uint64_t temp[4];
  compute_hash(source_p, temp, size_p);
  rsa2048_v1_5(temp,source_key_exp,source_key_mod, source_r_sqr, dest, 256, size_m, 0);
}
/*void rsa2048_oaep(void* source_p, void* source_key_exp, void* source_key_mod, void* source_r_sqr, void* dest, uint64_t size_p, uint64_t size_m){
  volatile uint64_t* ptrp = source_p;
  volatile uint64_t* ptre = source_key_exp;
  volatile uint64_t* ptrm = source_key_mod;
  volatile uint64_t* ptrr = source_r_sqr;
  volatile uint64_t* ptr_out = dest;
  volatile uint64_t* mme_plaintext=(uint64_t*) 0x00021300;
  volatile uint64_t* mme_exp      =(uint64_t*) 0x00021320;
  volatile uint64_t* mme_mod      =(uint64_t*) 0x00021340;
  volatile uint64_t* mme_rsqr     =(uint64_t*) 0x00021360;
  volatile uint64_t* mme_out      =(uint64_t*) 0x00021380;
  volatile uint8_t*  mme_status   =(uint8_t*)  0x000213c0;
  
  uint64_t tot_size = 4;
  //uint64_t tot_size = 32;

  //EXP
  for(int i=0; i<tot_size; i=i+1){
    if(i<2){
      *mme_exp = *(ptre+i);
      //*mme_exp = *(ptre+8*i);
    }
    else
      *mme_exp = 0;
  }
  //PLAINTEXT
  

  //MOD
  for(int i=0; i<tot_size; i=i+1){
    if((64*(i+1)<=size_m)&&(64*(i)<size_m)){
      *mme_mod = *(ptrm+i);
      //*mme_mod = *(ptrm+8*i);
    }
    else if((64*(i+1)>=size_m)&&(64*i<(size_m))){
      uint64_t data = *(ptrm+i);
      //uint64_t data = *(ptrm+8*i);
      uint64_t one = 1;
      uint64_t zero = 0;
      uint64_t mod = ((one<<(size_m-64*i))-one)&data;
      //uint64_t mod = ~(one<<(size_m-64*i)-one);
      *mme_mod = mod;
    }
    else
      *mme_mod = 0;
  }
  //RSQR
  for(int i=0; i<tot_size; i=i+1){
    *mme_rsqr = *(ptrr+i);
    //*mme_rsqr = *(ptrr+8*i);
  }
  
  while(*mme_status==0);
  for(int i=0; i<tot_size; i=i+1){
    *(ptr_out+i) = *mme_out;
  }

}*/
int main(){
  uint64_t a[RSA_LEN] = {0x20,0,0,0};
  uint64_t b[RSA_LEN] = {0x11,0,0,0};
  uint64_t c[RSA_LEN] = {0x65,0,0,0};
  uint64_t d[RSA_LEN] = {0x38,0,0,0};
  uint64_t e[RSA_LEN];
  rsa2048_v1_5_sign(a,b,c,d,e,200,256);
  //rsa2048_v1_5(a,b,c,d,e,200,256,0);
  printf("%lx %lx %lx %lx\n", e[0], e[1], e[2], e[3]);

  //compute_hash(a,e,128);
  //printf("%lx %lx %lx %lx\n", e[0], e[1], e[2], e[3]);
  //printf("%d\n", rand());
}
