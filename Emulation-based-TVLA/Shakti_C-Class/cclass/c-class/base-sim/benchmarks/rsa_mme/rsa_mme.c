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
  printf("%x",*aes_status);
  volatile uint64_t outLSB= *aes_result;
  volatile uint64_t outMSB= *aes_result;

  *aes_plaintext= 0x313198a2e0370735;
  *aes_plaintext2= 0x4243f6a8885a308d;

  while((*aes_status & 1) == 0);

  volatile uint64_t outLSB2= *aes_result;
  volatile uint64_t outMSB2= *aes_result;
  printf("\nResult2: 0x %lx %lx %lx %lx \n", outMSB, outLSB, outMSB2, outLSB2);
  */
  //dbeef000b7dde0006fbbc000df778000beef00007dde0000fbbc0000f7780000eef00000dde00000bbc0000077800000ef000000de000000bc00000078000000
  volatile uint64_t* mme_plaintext1=(uint64_t*) 0x00021300;
  volatile uint64_t* mme_plaintext2=(uint64_t*) 0x00021300;
  volatile uint64_t* mme_exp1=(uint64_t*) 0x00021320;
  volatile uint64_t* mme_exp2=(uint64_t*) 0x00021320;
  volatile uint64_t* mme_mod1=(uint64_t*) 0x00021340;
  volatile uint64_t* mme_mod2=(uint64_t*) 0x00021340;
  volatile uint64_t* mme_rsqr1=(uint64_t*) 0x00021360;
  volatile uint64_t* mme_rsqr2=(uint64_t*) 0x00021360;
  volatile uint64_t* mme_output1=(uint64_t*) 0x00021380;
  volatile uint64_t* mme_output2=(uint64_t*) 0x00021380;
  volatile uint8_t* mme_status=(uint8_t*) 0x000213c0;

  //*mme_config=0;
  *mme_plaintext1=0x0000000000000020;
  *mme_plaintext1=0x0000000000000000;
  *mme_exp1=0x0000000000000011;
  *mme_exp1=0x0000000000000000;
  *mme_mod1=0x0000000000000065;
  *mme_mod1=0x0000000000000000;
  *mme_rsqr1=0x0000000000000025;
  *mme_rsqr1=0x0000000000000000;
  printf("Hi");

  volatile uint64_t outLSB1= *mme_output1;
  volatile uint64_t outLSB2= *mme_output1;
  printf("\nResult2: 0x %lx %lx\n", outLSB2, outLSB1);
  return 0;
}
