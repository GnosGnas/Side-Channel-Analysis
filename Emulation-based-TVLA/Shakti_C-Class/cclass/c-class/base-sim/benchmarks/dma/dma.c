#include "dma.h"
#include <stdint.h>

#define DMA_INTERRUPTS (DMA_CCR_TEIE|DMA_CCR_HTIE|DMA_CCR_TCIE|DMA_CCR_EN)

void waitfor(unsigned int secs) {
	unsigned int time = 0;
	while(time++ < secs);
}

void wait_for_dma_interrupt()
{
	while(((*dma_isr)&0x2)!=0x2) {
    printf("\t Waiting for DMA interrupt ISR value: %08x\n",*dma_isr);
	}
	*dma_ccr2= 0x0;	//disabling the DMA channel
	*dma_ccr1= 0x0;	//disabling the DMA channel
  *dma_ifcr=0xFF; //Clearing the interrupt flag
	return;
}

int main()
{
    //printf("Starting DMA mem to mem transfer\n");

	//int a[10]={0xbabe0, 0xbabe1, 0xbabe2, 0xbabe3, 0xbabe4, 0xbabe5, 0xbabe6, 0xbabe7, 0xbabe8, 0xbabe9};
	//int b[10];
	//int c[15]={0xcafe0, 0xcafe1, 0xcafe2, 0xcafe3, 0xcafe4, 0xcafe5, 0xcafe6, 0xcafe7, 0xcafe8, 0xcafe9, 0xcafea, 0xcafeb, 0xcafec, 0xcafed, 0xcafee};
	//int d[15];
  uint64_t inp[6]={0x313198a2e0370734, 0x3243f6a8885a308d, 0x313198a2e0370735, 0x4243f6a8885a308d, 0x313198a2e0370736, 0x4343f6a8885a308d};
  uint64_t outp[6]={1,2,3,4,5,6};

  uint64_t* inp_ptr= inp;
  uint64_t* outp_ptr= outp;

  //volatile uint64_t* aes_key=(uint64_t*) 0x00021020;
  //volatile uint8_t* aes_config=(uint8_t*) 0x00021060;
  //volatile uint8_t* aes_status=(uint8_t*) 0x00021061;

  volatile uint64_t* aes_plaintext=(uint64_t*) 0x00021400;
  volatile uint64_t* aes_key=(uint64_t*) 0x00021420;
  volatile uint64_t* aes_iv=(uint64_t*) 0x00021440;
  volatile uint64_t* aes_result=(uint64_t*) 0x00021460;
  volatile uint8_t* aes_mode=(uint8_t*) 0x00021480;
  volatile uint8_t* aes_config=(uint8_t*) 0x00021483;
  volatile uint8_t* aes_encdec=(uint8_t*) 0x00021484;
  volatile uint8_t* aes_status=(uint8_t*) 0x00021485;
  volatile uint8_t* aes_keylen=(uint8_t*) 0x00021486;

  //printf("&I: %08x &O: %08x\n",inp_ptr,outp_ptr);

  //Setup giving inputs to AES
  *aes_key= 0xabf7158809cf4f3c;
  *aes_key= 0x2b7e151628aed2a6;
  *aes_mode=0;
  *aes_iv  =0;
  *aes_iv  =0;
  *aes_encdec=0;
  *aes_keylen=1;

  *aes_config=1;                  //Encrypt=0 / Decrypt=1

  *dma_cndtr2= 16;                //Size of input in bytes
  *dma_cmar2= inp_ptr;               //Memory address
  printf("%lx\n",*dma_cmar2);
  *dma_cpar2= 0x00021400;         //Peripheral address
  
  //Setup reading output from AES
  *dma_cndtr1= 16;                //Size of input in bytes
  *dma_cmar1= outp_ptr;           //Memory address
  *dma_cpar1= 0x00021460;         //Peripheral address

  //Setup the interrupt lines for both the channels
  //*dma_cselr=0x80;                //Channel 0 is for can_take_inp, Channel 1 is for outp_ready
  *dma_cselr=0xffffffff;                //Channel 0 is for can_take_inp, Channel 1 is for outp_ready
  
  __asm__("fence\n\t");

  int burst=0;
  printf("HI %lx\n",burst);
  //*dma_ccr3= (DMA_CCR_BURST_LEN(burst)|DMA_CCR_MEM2MEM|DMA_CCR_PL(2)|DMA_CCR_MSIZE(DMA_FOURBYTE)|DMA_CCR_PSIZE(DMA_FOURBYTE)|DMA_CCR_MINC|DMA_CCR_PINC|DMA_CCR_DIR|DMA_INTERRUPTS);
  *dma_ccr1= (DMA_CCR_BURST_LEN(burst)|DMA_CCR_PL(2)|DMA_CCR_MSIZE(DMA_EIGHTBYTE)|DMA_CCR_PSIZE(DMA_EIGHTBYTE)|DMA_CCR_MINC|DMA_READ_FROM_PERIPH|DMA_INTERRUPTS);
  *dma_ccr2= (DMA_CCR_BURST_LEN(burst)|DMA_CCR_PL(1)|DMA_CCR_MSIZE(DMA_EIGHTBYTE)|DMA_CCR_PSIZE(DMA_EIGHTBYTE)|DMA_CCR_MINC|DMA_READ_FROM_MEM|DMA_INTERRUPTS);
  printf("\t DMA_CCR2 value: %08x\n",*dma_ccr2);
  
  printf("\t DMA_CCR1 value: %08x\n",*dma_ccr1);

  wait_for_dma_interrupt();
  //printf("\t Clearing Interrupt Flags\n");
  *dma_ifcr=0; 

  *aes_config=0;
  for(int i=0;i<=0;i++){
    printf("Output %d is 0x %lx %lx\n", i, outp[i*2], outp[(i*2)+1]);
  }
	    
  return 0;
}
