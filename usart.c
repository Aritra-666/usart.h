#include "usart.h"

int usart_init(int x){

    unsigned int UBRR = UBRR_VALUE(x); 
    
    UBRR0H = (unsigned char)(UBRR>>8);   // sets the higher bits
    UBRR0L = (unsigned char)UBRR;        // sets the lower bits
    
    UCSR0C |= (3<<1);      //sets MCU for 8 bit communication
 
    UCSR0B |= (3<<3);      //Enable TX and RX
    
    return 0;
}

int usart_transmit(char *ch){

    for (;*ch != '\0' ; ch++){
    
      while(!(UCSR0A & (1<<5))){}   //wait for the buffer to be empty   
      UDR0 = *ch;
          
    }
    
    return 0;
}

char usart_receive(void){

    while(!(UCSR0A & (1<<7))){}   //wait for receiving the data
    
    return (char)UDR0;

}


