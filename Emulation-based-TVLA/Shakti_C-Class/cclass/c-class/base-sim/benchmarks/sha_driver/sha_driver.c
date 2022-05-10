#include "util.h"

void pad_inp(void* source, uint64_t size){
  volatile uint64_t*ptr = source;
  uint64_t tot_size = size + 1 + 64;
  uint64_t padtotsize = ((tot_size>>9)+1);
  uint64_t num64size = ((padtotsize<<3));
  volatile uint64_t* sha_plaintext=(uint64_t*) 0x00021200;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;

  uint64_t temp1=0, temp2=0;
  uint64_t size_p = (size>>6);
  uint64_t one = 1, req = size&0x3f, zero = 0;
  if(req!=0){
    for(int i=0; i<num64size; i++){
      //temp2 = *(ptr+i)&((one<<(req))-1);
      //*(ptr+i) = *(ptr+i)>>(req);
      //*(ptr+i) = *(ptr+i) | (temp1<<(64-req));
      //temp1 = temp2;
      temp2 = *(ptr+i)&((~(zero))<<(64-req));
      *(ptr+i) = (*(ptr+i)<<(64-req))|(temp1>>(req));
      //*(ptr+i) = *(ptr+i) | (temp1);
      temp1 = temp2;
    }
  }
  for(int i=0; i<num64size; i++)
    printf("%lx ", *(ptr+(num64size-1-i)));

  *sha_config = 0;
  for(int i=0; i<num64size; i++){
    if(i==8)
      *sha_config = 1;
    if(64*(i+1)<=size){
      //*sha_plaintext = (*(ptr+(padtotsize-i))<<(num64size-));
      if(req!=0)
        *sha_plaintext = *(ptr+(size_p-i));
      else
        *sha_plaintext = *(ptr+(size_p-i-1));
      printf("\n%d, %lx\n", i, *(ptr+(size_p-i)));
    }
    else if(64*(i+1)<=size+64){
      uint64_t data;
      if(req!=0)
        data = *(ptr+(size_p-i));
      else
        data = *(ptr+(size_p-i-1));
      uint64_t one = 1;
      uint64_t max = ~0;
      data = ((data)|(one<<(64-(size+64-64*(i+1)+1))))&(max-((one<<(64-(64+size-64*(i+1)+2)))-1));
      printf("\n%d, %lx\n", i, data);
      *sha_plaintext = data;
    }
    else if(i==(num64size-1))
      *sha_plaintext = size;
    else
      *sha_plaintext = 0;
  }
}

void compute_hash(void* source, void* dest, uint64_t size){
  void *ptr = source;
  volatile uint64_t* ptr_out = dest;
  uint64_t tot_size = size + 1 + 64;
  uint64_t padtotsize = ((tot_size>>9)+1);
  uint64_t num64size = ((padtotsize<<3));
  volatile uint64_t* sha_plaintext=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_output=(uint64_t*) 0x00021280;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;
  volatile uint8_t* sha_status=(uint8_t*) 0x000212c1;

  pad_inp(source, size);
  //*sha_config = 0;
  //for(int i=0; i<num64size; i++){
  //  //printf("%d, %d, %d, %d, %d\n", i, padtotsize, *((uint64_t*)(ptr+i*8)), num64size, size);
  //  if(i==8){
  //    *sha_config = 1;
  //  }
  //  if(64*(i+1)<=size){
  //    *sha_plaintext = *((uint64_t*)(ptr+i*8));
  //    //printf("IF %lx\n", *((uint64_t*)(ptr+i*8)));
  //  }
  //  else if(64*(i+1)<=size+64){
  //    uint64_t data = *((uint64_t*)(ptr+i*8));
  //    uint64_t one = 1;
  //    uint64_t max = ~0;
  //    data = ((data)|(one<<(64-(size+64-64*(i+1)+1))))&(max-((one<<(64-(64+size-64*(i+1)+2)))-1));
  //    *sha_plaintext = data;
  //    //printf("ELIF %llx, %llx, %llx, %llx, %llx\n", data, 64-(size+64-64*(i+1)-1), ((one)<<(size+64-64*(i+1)-1)),*((uint64_t*)(ptr+i*8))<<63, (one<<63));
  //  }
  //  else if(i==(num64size-1)){
  //    *sha_plaintext = size;
  //    //printf("ELIF2 %lx\n", size);
  //  }
  //  else {
  //    *sha_plaintext = 0;
  //    //printf("ELSE\n");
  //  }
  //}
  //printf("DONE sending IP\n");

  //for(int i=0; i<4; i++){
  //  *(ptr_out+i) = *sha_output;
    //ptr_out++;
  //  printf("%d, %lx\n", i, *sha_output);
  //}
  while(*sha_status == 0);
  *(ptr_out+0) = *sha_output;
  *(ptr_out+1) = *sha_output;
  *(ptr_out+2) = *sha_output;
  *(ptr_out+3) = *sha_output;
  //printf("DONE sending PP\n");
  *sha_config = 0;
}

int main(){
  uint64_t a[8] = {7,1,2,3,4,5,6,5};
  uint64_t b[4];

  compute_hash(a,b,256);
  printf("%lx %lx %lx %lx\n", b[3], b[2], b[1], b[0]);

  for(int i=0; i<8; i++)
    printf("%lx\n", a[i]);

  uint64_t c[8] = {7,1,2,3,4,5,6,5};
  compute_hash(c,b,400);
  for(int i=0; i<8; i++)
    printf("%lx\n", c[i]);
  printf("%lx %lx %lx %lx\n", b[3], b[2], b[1], b[0]);
}
//int main(){
  //dbeef000b7dde0006fbbc000df778000beef00007dde0000fbbc0000f7780000eef00000dde00000bbc0000077800000ef000000de000000bc00000078000000
  /*
  volatile uint64_t* sha_plaintext1=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext2=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext3=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext4=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext5=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext6=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext7=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_plaintext8=(uint64_t*) 0x00021200;
  volatile uint64_t* sha_output1=(uint64_t*) 0x00021280;
  volatile uint64_t* sha_output2=(uint64_t*) 0x00021280;
  volatile uint64_t* sha_output3=(uint64_t*) 0x00021280;
  volatile uint64_t* sha_output4=(uint64_t*) 0x00021280;
  volatile uint8_t* sha_config=(uint8_t*) 0x000212c0;
  volatile uint8_t* sha_status=(uint8_t*) 0x000212c1;

  // *sha_config=0;
  *sha_plaintext1=0xbc00000078000000;
  *sha_plaintext2=0xef000000de000000;
  *sha_plaintext3=0xbbc0000077800000;
  *sha_plaintext4=0xeef00000dde00000;
  *sha_plaintext5=0xfbbc0000f7780000;
  *sha_plaintext6=0xbeef00007dde0000;
  *sha_plaintext7=0x6fbbc000df778000;
  *sha_plaintext8=0xdbeef000b7dde000;
  printf("Hi");

  volatile uint64_t outLSB1= *sha_output1;
  volatile uint64_t outLSB2= *sha_output1;
  volatile uint64_t outLSB3= *sha_output1;
  volatile uint64_t outLSB4= *sha_output1;
  printf("\nResult2: 0x %lx %lx %lx %lx \n", outLSB4, outLSB3, outLSB2, outLSB1);
  return 0;
  */
//}
