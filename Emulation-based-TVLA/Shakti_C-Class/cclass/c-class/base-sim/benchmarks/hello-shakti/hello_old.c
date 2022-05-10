#include "util.h"

int main(){
  //printf("Hello World from SHAKTI\n");
  
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
  
  /*
  volatile uint32_t* aes_plaintext=(uint64_t*) 0x00021000;
  volatile uint32_t* aes_plaintext2=(uint64_t*) 0x00021000;
  volatile uint32_t* aes_plaintext3=(uint64_t*) 0x00021000;
  volatile uint32_t* aes_plaintext4=(uint64_t*) 0x00021000;
  volatile uint32_t* aes_key=(uint64_t*) 0x00021020;
  volatile uint32_t* aes_result=(uint64_t*) 0x00021040;
  volatile uint8_t* aes_config=(uint8_t*) 0x00021060;
  volatile uint8_t* aes_status=(uint8_t*) 0x00021061;

  *aes_key= 0xabf71588;
  *aes_key= 0x09cf4f3c;
  *aes_key= 0x2b7e1516;
  *aes_key= 0x28aed2a6;
  *aes_config=0;
  *aes_plaintext= 0x313198a2;
  *aes_plaintext2= 0xe0370734;
  *aes_plaintext3= 0x3243f6a8;
  *aes_plaintext4= 0x885a308d;
  //printf("I am wasting time because I don't want to read status\n");
  //printf("askdhkajsdhkjaksdkahskdjhalksdkjahskjdfhakjhfkjahsdfkjaskdhkasdjagsjdgjasdagsdjgafgjsdfghafshdfad\n");
  while((*aes_status & 1) == 0);
  //printf("%x",*aes_status);
  volatile uint32_t outLSB= *aes_result;
  volatile uint32_t outLSB1= *aes_result;
  volatile uint32_t outMSB1= *aes_result;
  volatile uint32_t outMSB= *aes_result;
  printf("\nResult1: 0x %lx %lx \n", outMSB, outMSB1, outLSB1, outLSB);

  *aes_plaintext= 0x313198a2;
  *aes_plaintext= 0xe0370735;
  *aes_plaintext2= 0x4243f6a8;
  *aes_plaintext2= 0x885a308d;

  while((*aes_status & 1) == 0);

  volatile uint32_t outLSB2= *aes_result;
  volatile uint32_t outLSB21= *aes_result;
  volatile uint32_t outMSB22= *aes_result;
  volatile uint32_t outMSB2= *aes_result;
  printf("\nResult2: 0x %x %x %x %x \n", outMSB2, outMSB22, outLSB21, outLSB2);
  */
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

  *sha_config=0;
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
  *sha_config=1;
  *sha_plaintext1=0xbc00000078000001;
  *sha_plaintext2=0xef000000de000000;
  *sha_plaintext3=0xbbc0000077800000;
  *sha_plaintext4=0xeef00000dde00000;
  *sha_plaintext5=0xfbbc0000f7780000;
  *sha_plaintext6=0xbeef00007dde0000;
  *sha_plaintext7=0x6fbbc000df778000;
  *sha_plaintext8=0xdbeef000b7dde000;
  printf("Hi");
  outLSB1= *sha_output1;
  outLSB2= *sha_output1;
  outLSB3= *sha_output1;
  outLSB4= *sha_output1;
  printf("\nResult2: 0x %lx %lx %lx %lx \n", outLSB4, outLSB3, outLSB2, outLSB1);

  *sha_config=0;
  *sha_plaintext1=0xbc00000078000000;
  *sha_plaintext2=0xef000000de000000;
  *sha_plaintext3=0xbbc0000077800000;
  *sha_plaintext4=0xeef00000dde00000;
  *sha_plaintext5=0xfbbc0000f7780000;
  *sha_plaintext6=0xbeef00007dde0000;
  *sha_plaintext7=0x6fbbc000df778000;
  *sha_plaintext8=0xdbeef000b7dde000;
  printf("Hi");
  outLSB1= *sha_output1;
  outLSB2= *sha_output1;
  outLSB3= *sha_output1;
  outLSB4= *sha_output1;
  printf("\nResult2: 0x %lx %lx %lx %lx \n", outLSB4, outLSB3, outLSB2, outLSB1);

  */
  return 0;
}
