#include "util.h"

int main(){
  //printf("Hello World from SHAKTI\n");
  /*
  volatile uint64_t* aes_plaintext=(uint64_t*) 0x00021000;
  volatile uint64_t* aes_plaintext2=(uint64_t*) 0x00021000;
  volatile uint64_t* aes_key=(uint64_t*) 0x00021020;
  volatile uint64_t* aes_result=(uint64_t*) 0x00021040;
  volatile uint8_t* aes_config=(uint8_t*) 0x00021060;
  volatile uint8_t* aes_status=(uint8_t*) 0x00021061;

  *aes_key= 0xabf7158809cf4f3c;
  *aes_key= 0x2b7e151628aed2a6;
  *aes_config=0;
  *aes_plaintext= 0x313198a2e0370734;
  *aes_plaintext2= 0x3243f6a8885a308d;
  //printf("I am wasting time because I don't want to read status\n");
  //printf("askdhkajsdhkjaksdkahskdjhalksdkjahskjdfhakjhfkjahsdfkjaskdhkasdjagsjdgjasdagsdjgafgjsdfghafshdfad\n");
  while((*aes_status & 1) == 0);
  //printf("%x",*aes_status);
  volatile uint64_t outLSB= *aes_result;
  volatile uint64_t outMSB= *aes_result;
  printf("\nResult1: 0x %lx %lx \n", outMSB, outLSB);

  *aes_plaintext= 0x313198a2e0370735;
  *aes_plaintext2= 0x4243f6a8885a308d;

  while((*aes_status & 1) == 0);

  volatile uint64_t outLSB2= *aes_result;
  volatile uint64_t outMSB2= *aes_result;
  printf("\nResult2: 0x %lx %lx %lx %lx \n", outMSB, outLSB, outMSB2, outLSB2);
  */

  volatile uint64_t* aes_plaintext1=(uint64_t*) 0x00021400;
  volatile uint64_t* aes_plaintext2=(uint64_t*) 0x00021400;
  volatile uint64_t* aes_key=(uint64_t*) 0x00021420;
  volatile uint64_t* aes_iv=(uint64_t*) 0x00021440;
  volatile uint64_t* aes_result=(uint64_t*) 0x00021460;
  volatile uint8_t* aes_mode=(uint8_t*) 0x00021480;
  volatile uint8_t* aes_config=(uint8_t*) 0x00021483;
  volatile uint8_t* aes_encdec=(uint8_t*) 0x00021484;
  volatile uint8_t* aes_status=(uint8_t*) 0x00021485;
  volatile uint8_t* aes_keylen=(uint8_t*) 0x00021486;

  *aes_key= 0xabf7158809cf4f3c;
  *aes_key= 0x2b7e151628aed2a6;
  *aes_mode=0;
  *aes_iv  =0;
  *aes_iv  =0;
  *aes_encdec=0;
  *aes_keylen=1;
  *aes_config=1;
  //*aes_plaintext1= 0xe0370734313198a2;
  //*aes_plaintext2= 0x885a308d3243f6a8;
  *aes_plaintext1= 0x313198a2e0370734;
  *aes_plaintext2= 0x3243f6a8885a308d;
  *aes_plaintext1= 0x313198a2e0370735;
  *aes_plaintext2= 0x4243f6a8885a308d;
  *aes_config=0;
  //printf("I am wasting time because I don't want to read status\n");
  //printf("askdhkajsdhkjaksdkahskdjhalksdkjahskjdfhakjhfkjahsdfkjaskdhkasdjagsjdgjasdagsdjgafgjsdfghafshdfad\n");
  while((*aes_status & 1) == 0);
  //printf("%x",*aes_status);
  volatile uint64_t outLSB= *aes_result;
  volatile uint64_t outMSB= *aes_result;
  printf("\nResult1: 0x %lx %lx \n", outMSB, outLSB);
  while((*aes_status & 1) == 0);
  outLSB= *aes_result;
  outMSB= *aes_result;
  printf("\nResult1: 0x %lx %lx \n", outMSB, outLSB);

  //*aes_plaintext= 0x313198a2;
  //*aes_plaintext= 0xe0370735;
  //*aes_plaintext2= 0x4243f6a8;
  //*aes_plaintext2= 0x885a308d;

  //while((*aes_status & 1) == 0);

  //volatile uint64_t outLSB2= *aes_result;
  //volatile uint64_t outLSB21= *aes_result;
  //volatile uint64_t outMSB22= *aes_result;
  //volatile uint64_t outMSB2= *aes_result;
  //printf("\nResult2: 0x %lx %lx %lx %lx \n", outMSB2, outMSB22, outLSB21, outLSB2);

  return 0;
}
