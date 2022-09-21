app.c
Implement an echo application using the SW UART
The SW UART has a 9600 baud rate
The baud represents only one bit
The UART has two stop bits
The data length is 8 bytes long
The UART use even parity, use the equation in the datasheet
Use Time 0 in normal mode if needed

 */
void SWUART_init(uint32_t baudrate);
void SWUART_init(uint32_t baudrate)
{
	
	UBRRH = (unsigned char)(baudrate>8);
	UBRRL = (unsigned char)baudrate;
	UCSRB |= (1<RXEN) |(1 <<TXEN);
	UCSRC |= (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}
 void SWUART_send(uint8_t data);
 void SWUART_send(uint8_t data){
 {
 
		while(!(UCSRA &(1 <<UDRE)));
		UDR = data;
		
 }
  void SWUART_recieve(uint8_t *data);
  {
      while(UCSRA &(1<<RXC)) ==0);
	  *data = UDR;
  }
 