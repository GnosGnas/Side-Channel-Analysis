#include "util.h"

int main(){


  volatile uint64_t* aes_fixedpt1=(uint64_t*) 0x00021400;
  volatile uint64_t* aes_fixedpt2=(uint64_t*) 0x00021400;
  volatile uint64_t* aes_randpt1=(uint64_t*) 0x00021400;
  volatile uint64_t* aes_randpt2=(uint64_t*) 0x00021400;
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
  
  int n_inputs = 500000;
  int i=0;
  int switcher=0;
  int delayamt=2000;
 /*
  *aes_fixedpt1= 0x313198a2e0370734; //fixed inp
  *aes_fixedpt2= 0x3243f6a8885a308d; //fixed inp
  *aes_randpt1= 0x313198a2e0370735;
  *aes_randpt2= 0x4243f6a8885a308d;*/
  *aes_config=0;  //what is this?
 volatile uint64_t outLSB = 0x313198a2e0370735;
 volatile uint64_t outMSB = 0x4243f6a8885a308d;
  //while((*aes_status & 1) == 0);

 // volatile uint64_t outLSB= *aes_result;
 // volatile uint64_t outMSB= *aes_result;
 // printf("\nResult1: 0x %lx %lx \n", outMSB, outLSB);
  
  for(i=0;i<n_inputs;i++)
  {
  start_trigger();
 if (switcher==0)
  { *aes_fixedpt1 = 0x313198a2e0370734;
  	*aes_fixedpt2 = 0x3243f6a8885a308d;
  	switcher = 1;
  }
  else {
	*aes_randpt1 = outMSB; //switching output and giving it as input
	*aes_randpt2 = outLSB;
	switcher = 0;
	}
  
  while((*aes_status & 1) == 0);
  outLSB= *aes_result;
  outMSB= *aes_result;
  printf("\nResult1: 0x %lx %lx \n", outMSB, outLSB);
	stop_trigger();
	delay(delayamt);
	}
  return 0;
}

void delay(int number_of_seconds)
{
    // Converting time from nano into milli_seconds
    int milli_seconds = 1000*number_of_seconds;
 
    // Defining start time
    int start_time = 0;
 
    // looping till required time is not acheived
    while (milli_seconds > start_time)
       start_time++ ;
}
