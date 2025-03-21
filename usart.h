#ifndef USART_H

#define USART_H

#ifndef PORTB
    #define PORTB    *((volatile unsigned char *)0x25)
#endif

#ifndef DDRB
    #define DDRB     *((volatile unsigned char *)0x24)
#endif

#ifndef UDR0
    #define UDR0     *((volatile unsigned char *)0xC6)
#endif

#ifndef UBRR0H
    #define UBRR0H   *((volatile unsigned char *)0xC5)
#endif

#ifndef UBRR0L
    #define UBRR0L   *((volatile unsigned char *)0xC4)
#endif

#ifndef UCSR0C
    #define UCSR0C   *((volatile unsigned char *)0xC2)
#endif

#ifndef UCSR0B
    #define UCSR0B   *((volatile unsigned char *)0xC1)
#endif

#ifndef UCSR0A
    #define UCSR0A   *((volatile unsigned char *)0xC0)
#endif


#ifndef F_CLK
    #define F_CLK 16000000UL  
#endif


#ifndef UBRR_VALUE
    #define UBRR_VALUE(x) F_CLK/16/x-1 
#endif

#endif

int usart_init(int);




int usart_transmit(char*);




char usart_receive(void);

