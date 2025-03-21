# Introduction 
This header file contains three functions.
usart_init(), usart_transmit() and usart_receive()
#Note
The clk frequency is mentioned in the header file as F_CLK and the default value is 16MHz which can be changed using #undef.
#usart_init()
This function initialize the hardware for 8 bit, no parity and 1 stop bit usart communication. It takes one integer parameter, baud rate.
#usart_transmit()
This function takes one parameter, string and transmit it character by character.
#usart_receive()
This function requires no parameter. It waits for receiving a data and return it in char form.

 