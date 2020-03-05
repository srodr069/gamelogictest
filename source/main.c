/*	Author: steven
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */



#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "LCD_16x2_H_file.h"
#include "ADC_H.h"
#include "joystick.h"
#include "timer.h"
#include <avr/interrupt.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void)
{
	DDRB = 0xFF; PORTB = 0x00;
	char buffer[20];
	int ADC_Value;
	TimerSet(1);
	TimerOn();
	
	ADC_Init();							/* ADC initialize function */
	LCD_Init();							/* LCD initialize function */

	while(1){
		ADC_Value = ADC_Read(0);		/* Read the status on X-OUT pin using channel 0 */
		sprintf(buffer, "X=%d   ", ADC_Value);
		LCD_String_xy(1, 0, buffer);
		
		ADC_Value = ADC_Read(1);		/* Read the status on Y-OUT pin using channel 0 */
		sprintf(buffer, "Y=%d   ", ADC_Value);
		LCD_String_xy(1, 8, buffer);

		ADC_Value = ADC_Read(3);		/* Read the status on SWITCH pin using channel 0 */
		/*if(ADC_Value < 600)
			LCD_String_xy(2, 0, "Switch pressed   ");
		else
			LCD_String_xy(2, 0, "Switch open      ");
			*/
		sprintf(buffer, "X2=%d   ", ADC_Value);
		LCD_String_xy(2, 0, buffer);

		ADC_Value = ADC_Read(4);
		sprintf(buffer, "Y2=%d   ", ADC_Value);
		LCD_String_xy(2, 8, buffer);
		js();
		js2();

		/*switch(direction) { //didnt work
			case '1':
				led = 0x01;
				break;
			case '2':
				led = 0x02;
				break;
			case '3':
				led = 0x04;
				break;
			case '4':
				led = 0x08;
				break;
			case '0':
				led = 0x00;
				break;
			default:
				break;
		} */

		PORTB = led | led2;
		while(!TimerFlag){
			TimerFlag = 0;}
}
}