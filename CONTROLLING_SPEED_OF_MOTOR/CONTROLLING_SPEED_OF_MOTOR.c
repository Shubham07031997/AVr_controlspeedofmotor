#include<avr/io.h>
#define F_CPU 1000000
#include<util/delay.h>
#include"lcdavr.h"



void init_PWM()
{
	TCCR0 |= (1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<COM00)|(1<<CS00); 
	DDRB |= 1<<PB3;
 
}
int main()
{    
DDRA=0<<PA0;
PORTA=1<<PA0;
	init_PWM();
	while(1) 
   	{  
	int i;
	OCR0=i  ;
	    for(int i=0;i<250;i++)
     {
       OCR0=i; 
	   _delay_ms(300);
	 
     }
	 
   for( i=250;i>0;i--)
     {
       OCR0=i; //output at pb3
      
	   _delay_ms(300);
	     }
		 

      } 
	return 0;
}


//************************************END**************************************************
