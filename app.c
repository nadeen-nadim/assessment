#include "uart.h"
#include "DIO.h"

int main()
{
     DIO_init(0, 'A', OUT);
	 DIO_init(1, 'A', IN);
	 uint_8 data;
	 
	 SWUART_init(9600);
	 while(1)
	 {
		DIO_write(1,'A',SWUART_send(data);
		DIO_read(0,'A'SWUART_send(data));
	 }
	 
}