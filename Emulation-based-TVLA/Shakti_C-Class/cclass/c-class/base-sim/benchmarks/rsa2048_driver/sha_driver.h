#ifndef sha_driver_h
#define sha_driver_h
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
      temp2 = *(ptr+i)&((~(zero))<<(64-req));
      *(ptr+i) = (*(ptr+i)<<(64-req))|(temp1>>(req));
      temp1 = temp2;
    }
  }

  *sha_config = 0;
  for(int i=0; i<num64size; i++){
    if(i==8)
      *sha_config = 1;
    if(64*(i+1)<=size){
      if(req!=0)
        *sha_plaintext = *(ptr+(size_p-i));
      else
        *sha_plaintext = *(ptr+(size_p-i-1));
      //printf("\n%d, %lx\n", i, *(ptr+(size_p-i)));
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
  while(*sha_status == 0);
  *(ptr_out+0) = *sha_output;
  *(ptr_out+1) = *sha_output;
  *(ptr_out+2) = *sha_output;
  *(ptr_out+3) = *sha_output;
  *sha_config = 0;
}

#endif
