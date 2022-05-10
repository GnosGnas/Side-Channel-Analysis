#ifndef DMA_H
#define DMA_H

#include<stdlib.h>

#define DMA_BASE 0x00021100

#define DMA_CCR1	  0x00021100
#define DMA_CNDTR1	0x00021108
#define DMA_CPAR1	  0x00021110
#define DMA_CMAR1	  0x00021118


#define DMA_CCR2	  0x00021120
#define DMA_CNDTR2	0x00021128
#define DMA_CPAR2	  0x00021130
#define DMA_CMAR2	  0x00021138


#define DMA_CCR3	  0x00021140
#define DMA_CNDTR3	0x00021148
#define DMA_CPAR3	  0x00021150
#define DMA_CMAR3	  0x00021158


#define DMA_CCR4	  0x00021160
#define DMA_CNDTR4	0x00021168
#define DMA_CPAR4	  0x00021170
#define DMA_CMAR4	  0x00021178


#define DMA_CCR5	  0x00021180
#define DMA_CNDTR5	0x00021188
#define DMA_CPAR5	  0x00021190
#define DMA_CMAR5	  0x00021198


#define DMA_CCR6	  0x000211A0
#define DMA_CNDTR6	0x000211A8
#define DMA_CPAR6	  0x000211B0
#define DMA_CMAR6	  0x000211B8


#define DMA_CCR7	  0x000211C0
#define DMA_CNDTR7	0x000211C8
#define DMA_CPAR7 	0x000211D0
#define DMA_CMAR7	  0x000211D8



#define	DMA_ISR		  0x000211E0
#define DMA_IFCR	  0x000211E8
#define DMA_CSELR	  0x000211F0



//Defines for ISR TEIFx
#define DMA_ISR_TEIF7 (1<<27)
#define DMA_ISR_TEIF6 (1<<23)
#define DMA_ISR_TEIF5 (1<<19)
#define DMA_ISR_TEIF4 (1<<15)
#define DMA_ISR_TEIF3 (1<<11)
#define DMA_ISR_TEIF2 (1<<7 )
#define DMA_ISR_TEIF1 (1<<3 )


//Defines for ISR HTIFx
#define DMA_ISR_HTIF7 (1<<26)
#define DMA_ISR_HTIF6 (1<<22)
#define DMA_ISR_HTIF5 (1<<18)
#define DMA_ISR_HTIF4 (1<<14)
#define DMA_ISR_HTIF3 (1<<10)
#define DMA_ISR_HTIF2 (1<<6 )
#define DMA_ISR_HTIF1 (1<<2 )

//Defines for ISR TCIFx
#define DMA_ISR_TCIF7 (1<<25)
#define DMA_ISR_TCIF6 (1<<21)
#define DMA_ISR_TCIF5 (1<<17)
#define DMA_ISR_TCIF4 (1<<13)
#define DMA_ISR_TCIF3 (1<<9)
#define DMA_ISR_TCIF2 (1<<5 )
#define DMA_ISR_TCIF1 (1<<1 )

//Defines for ISR GIFx
#define DMA_ISR_GIF7 (1<<24)
#define DMA_ISR_GIF6 (1<<20)
#define DMA_ISR_GIF5 (1<<16)
#define DMA_ISR_GIF4 (1<<12)
#define DMA_ISR_GIF3 (1<<8)
#define DMA_ISR_GIF2 (1<<4 )
#define DMA_ISR_GIF1 (1<<0 )

//Defines for IFCRx
#define DMA_CTEIF7 (1<<27)
#define DMA_CTEIF6 (1<<23)
#define DMA_CTEIF5 (1<<19)
#define DMA_CTEIF4 (1<<15)
#define DMA_CTEIF3 (1<<11)
#define DMA_CTEIF2 (1<<7 )
#define DMA_CTEIF1 (1<<3 )

//Defines for ISR CHTIFx
#define DMA_ISR_CHTIF7 (1<<26)
#define DMA_ISR_CHTIF6 (1<<22)
#define DMA_ISR_CHTIF5 (1<<18)
#define DMA_ISR_CHTIF4 (1<<14)
#define DMA_ISR_CHTIF3 (1<<10)
#define DMA_ISR_CHTIF2 (1<<6 )
#define DMA_ISR_CHTIF1 (1<<2 )

//Defines for ISR CTCIFx
#define DMA_ISR_CTCIF7 (1<<25)
#define DMA_ISR_CTCIF6 (1<<21)
#define DMA_ISR_CTCIF5 (1<<17)
#define DMA_ISR_CTCIF4 (1<<13)
#define DMA_ISR_CTCIF3 (1<<9 )
#define DMA_ISR_CTCIF2 (1<<5 )
#define DMA_ISR_CTCIF1 (1<<1 )

//Defines for ISR CGIFx
#define DMA_ISR_CGIF7 (1<<24)
#define DMA_ISR_CGIF6 (1<<20)
#define DMA_ISR_CGIF5 (1<<16)
#define DMA_ISR_CGIF4 (1<<12)
#define DMA_ISR_CGIF3 (1<<8 )
#define DMA_ISR_CGIF2 (1<<4 )
#define DMA_ISR_CGIF1 (1<<0 )


//DMA_CCRx
#define DMA_CCR_BURST_LEN(x) (x<<16)
#define DMA_CCR_USER_READ    (1<<15)
#define DMA_CCR_MEM2MEM      (1<<14)
#define DMA_CCR_PL(x)        (x<<12) //Not more than 2 bits
#define DMA_CCR_MSIZE(x)     (x<<10) //Not more than two bits
#define DMA_CCR_PSIZE(x)     (x<<8 ) //Not more than two bits
#define DMA_CCR_MINC         (1<<7 )
#define DMA_CCR_PINC         (1<<6 )
#define DMA_CCR_CIRC         (1<<5 )
#define DMA_READ_FROM_PERIPH (0<<4 )
#define DMA_READ_FROM_MEM    (1<<4 )
#define DMA_CCR_TEIE         (1<<3 )
#define DMA_CCR_HTIE         (1<<2 )
#define DMA_CCR_TCIE         (1<<1 )
#define DMA_CCR_EN           (1<<0 )

//DMA_CNDTRx
#define DMA_CNDTR_NDT(x)     x

//DMA_CPARx
#define DMA_CPAR_PA(x)       x

//DMA_CMARx
#define DMA_CMAR_MA(x)       x

//DMA1_CSELR ---NOT DONE YET!!!!!!
#define DMA_BYTE      0x0
#define DMA_TWOBYTE   0x1
#define DMA_FOURBYTE  0x2
#define DMA_EIGHTBYTE 0x3






//Pointers for the Registers
int* dma_isr	= (const int *) DMA_ISR;
int* dma_ifcr	= (const int *) DMA_IFCR;
int* dma_ccr1	= (const int *) DMA_CCR1;
int* dma_cndtr1	= (const int *) DMA_CNDTR1;
long int* dma_cpar1	= (const long int *) DMA_CPAR1;
long int* dma_cmar1	= (const long int *) DMA_CMAR1;
int* dma_ccr2	= (const int *) DMA_CCR2;
int* dma_cndtr2	= (const int *) DMA_CNDTR2;
long int* dma_cpar2	= (const long int *) DMA_CPAR2;
long int* dma_cmar2	= (const long int *) DMA_CMAR2;
int* dma_ccr3	= (const int *) DMA_CCR3;
int* dma_cndtr3	= (const int *) DMA_CNDTR3;
long int* dma_cpar3	= (const long int *) DMA_CPAR3;
long int* dma_cmar3	= (const long int *) DMA_CMAR3;
int* dma_ccr4	= (const int *) DMA_CCR4;
int* dma_cndtr4	= (const int *) DMA_CNDTR4;
long int* dma_cpar4	= (const long int *) DMA_CPAR4;
long int* dma_cmar4	= (const long int *) DMA_CMAR4;
int* dma_ccr5	= (const int *) DMA_CCR5;
int* dma_cndtr5	= (const int *) DMA_CNDTR5;
long int* dma_cpar5	= (const long int *) DMA_CPAR5;
long int* dma_cmar5	= (const long int *) DMA_CMAR5;
int* dma_ccr6	= (const int *) DMA_CCR6;
int* dma_cndtr6	= (const int *) DMA_CNDTR6;
long int* dma_cpar6	= (const long int *) DMA_CPAR6;
long int* dma_cmar6	= (const long int *) DMA_CMAR6;
int* dma_ccr7	= (const int *) DMA_CCR7;
int* dma_cndtr7	= (const int *) DMA_CNDTR7;
long int* dma_cpar7	= (const long int *) DMA_CPAR7;
long int* dma_cmar7	= (const long int *) DMA_CMAR7;
int* dma_cselr	= (const int *) DMA_CSELR;

void set_dma_shakti(int *addr, long int val)
{
    *addr = val;
}

long int get_dma_shakti(int *addr)
{
    return *addr;
}


#endif
