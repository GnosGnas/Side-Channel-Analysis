#include "util.h"

void rsa2048_v1_5(void* source_p, void* source_key_exp, void* source_key_mod, void* source_r_sqr, void* dest, uint64_t size_p, uint64_t size_m, int sign){
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
  for(int i=0; i<tot_size; i=i+1){
    if((64*(i+1)<=size_p)&&(64*(i)<size_p)){
      *mme_plaintext = *(ptrp+i);
      //*mme_plaintext = *(ptrp+8*i);
      printf("HI1\n");
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)>(size_p+8))&&(64*i<size_p)&&(i!=(tot_size-1))){
    //else if((64*(i+1)>=size_p)&&(64*i<(size_p-8))){
      uint64_t data = *(ptrp+i);
      //uint64_t data = *(ptrp+8*i);
      uint64_t one = 1;
      uint64_t zero = 0;
      uint64_t mod = ((one<<(size_p-64*i))-1)&data;
      mod = ((~zero)<<(size_p+8-64*i))|mod;
      //uint64_t mod = ~(one<<(size_p-64*i)-one);
      *mme_plaintext = mod;
      printf("HI2\n");
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)>(size_p+8))&&(64*i<size_p)&&(i==(tot_size-1))){
    //else if((64*(i+1)>=size_p)&&(64*i<(size_p-8))){
      uint64_t data = *(ptrp+i);
      //uint64_t data = *(ptrp+8*i);
      uint64_t one = 1;
      uint64_t zero = 0;
      uint64_t mod = ((one<<(size_p-64*i))-1)&data;
      if(sign==0)
        mod = (((~zero)<<(size_p+8-64*i))|mod)&((one<<(64-15))-1);
      else
        mod = (((~zero)<<(size_p+8-64*i))|mod)&(((one<<(64-16))-1)|(one<<(64-15)));
      //uint64_t mod = ~(one<<(size_p-64*i)-one);
      *mme_plaintext = mod;
      printf("HI3\n");
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)<(size_p+8))&&(64*i<(size_p))&&(i!=(tot_size-1))){
    //else if((64*(i+1)>=size_p)&&(64*i>(size_p-8))&&(64*i<(size_p))){
      uint64_t data = *(ptrp+i);
      //uint64_t data = *(ptrp+8*i);
      uint64_t one = 1;
      uint64_t zero = 0;
      uint64_t mod = ((one<<(size_p-64*i))-one)&data;
      //uint64_t mod = ~(one<<(size_p-64*i)-one);
      *mme_plaintext = mod;
      printf("HI4\n");
    }
    else if((64*(i+1)>=size_p)&&(64*(i+1)<(size_p+8))&&(64*i<(size_p))&&(i==(tot_size-1))){
    //else if((64*(i+1)>=size_p)&&(64*i>(size_p-8))&&(64*i<(size_p))){
      uint64_t data = *(ptrp+i);
      //uint64_t data = *(ptrp+8*i);
      uint64_t one = 1;
      uint64_t zero = 0;
      uint64_t mod;
      if(sign==0)
        mod = (((one<<(size_p-64*i))-one)&data)&((one<<(64-15))-1);
      else
        mod = (((one<<(size_p-64*i))-one)&data)&(((one<<(64-16))-1)|(one<<(64-15)));
      //uint64_t mod = ~(one<<(size_p-64*i)-one);
      *mme_plaintext = mod;
      printf("HI5\n");
    }
    else if((64*(i)<(size_p+8))&&(64*(i)<size_p)&&(64*(i+1)>(size_p))&&(i!=(tot_size-1))){
      uint64_t one = 1;
      uint64_t zero = 0;
      *mme_plaintext = ((((~zero)<<((64*i)-size_p))));
      //*mme_plaintext = (~zero)&((one<<((64*i-64)-size_p+8))-1);
      printf("HI6\n");
    }
    else if((64*(i)<(size_p+8))&&(64*(i)>size_p)&&(64*(i+1)>(size_p))&&(i==(tot_size-1))){
      uint64_t one = 1;
      uint64_t zero = 0;
      if(sign==0)
        *mme_plaintext = (((((~zero)<<(64*i-size_p)))))&((one<<(64-15))-1);
      else
        *mme_plaintext = (((((~zero)<<(64*i-size_p)))))&(((one<<(64-16))-1)|(one<<(64-15)));
      //*mme_plaintext = ((~zero)|(((one<<((64*i-64)-size_p+8))-1)))&((one<<(64-15))-1);
      printf("HI7\n");
    }
    else if((64*(i)<=(size_p+8))&&(64*(i)<=size_p)&&(64*(i+1)>=(size_p))&&(i!=(tot_size-1))){
    //else if((64*(i-1)<=(size_p-8))&&(64*(i-1)<=size_p)&&(64*i>=(size_p))&&(i!=(tot_size-1))){
      uint64_t zero = 0;
      *mme_plaintext = ~zero;
      printf("HI8\n");
    }
    else if((64*(i)<=(size_p+8))&&(64*(i)<=size_p)&&(64*(i+1)>=(size_p))&&(i==(tot_size-1))){
    //else if((64*(i-1)<=(size_p-8))&&(64*(i-1)<=size_p)&&(64*i>=(size_p))&&(i==(tot_size-1))){
      uint64_t zero = 0;
      uint64_t one = 1;
      if(sign==0)
        *mme_plaintext = (~zero)&((one<<(64-15))-one);
      else
        *mme_plaintext = (~zero)&(((one<<(64-16))-1)|(one<<(64-15)));
      printf("HI9\n");
    }
    else if(((64*(i)>=size_p)&&(64*(i+1)>=(size_p))&&(i!=(tot_size-1)))){
    //else if((64*(i-1)<=(size_p-8))&&(64*(i-1)<=size_p)&&(64*i>=(size_p))&&(i==(tot_size-1))){
      uint64_t zero = 0;
      uint64_t one = 1;
      *mme_plaintext = (~zero);
      printf("HI10\n");
    }
    else if(((64*(i)>=size_p)&&(64*(i+1)>=(size_p))&&(i==(tot_size-1)))){
    //else if((64*(i-1)<=(size_p-8))&&(64*(i-1)<=size_p)&&(64*i>=(size_p))&&(i==(tot_size-1))){
      uint64_t zero = 0;
      uint64_t one = 1;
      if(sign==0)
        *mme_plaintext = (~zero)&((one<<(64-15))-one);
      else
        *mme_plaintext = (~zero)&(((one<<(64-16))-1)|(one<<(64-15)));
      printf("HI11\n");
    }
  }
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
}

void rsa2048_v1_5_verify(void* source_c, void* source_key_exp, void* source_key_mod, void* source_r_sqr){

}

void rsa2048_oaep(void* source_p, void* source_key_exp, void* source_key_mod, void* source_r_sqr, void* dest, uint64_t size_p, uint64_t size_m){
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

}
int main(){
  uint64_t a[4] = {0x20,0,0,0};
  uint64_t b[4] = {0x11,0,0,0};
  uint64_t c[4] = {0x65,0,0,0};
  uint64_t d[4] = {0x38,0,0,0};
  uint64_t e[4];
  rsa2048_v1_5(a,b,c,d,e,200,256,1);
  printf("%lx %lx %lx %lx\n", e[0], e[1], e[2], e[3]);

printf("%d\n", rand());
}
