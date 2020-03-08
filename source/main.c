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
#include <stdlib.h>
#include <avr/io.h>

#include <avr/pgmspace.h>
#include <avr/interrupt.h>

#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
#include "ILI9163.h" 		//lcd 
#include "LCD_16x2_H_file.h" //joystick position
#include "ADC_H.h"			//joystick adc value
#include "joystick2.h"		//joystick led function// going to tweak
#include "timer.h"			//timer 


	
	//unsigned char tron[129][128];


int main(void)
{
	DDRB = 0xFF; PORTB = 0x00;
	char buffer[20];
	int ADC_Value;
	TimerSet(1);
	TimerOn();

	
	initGame();

	//Border definition


	

	
	
	ADC_Init();							/* ADC initialize function */
	LCD_Init16();							/* LCD initialize function */

	while(1){
		ADC_Value = ADC_Read(0);		/* Read the status on X-OUT pin using channel 0 */
		sprintf(buffer, "X1=%d   ", ADC_Value);
		LCD_String_xy(1, 0, buffer);
		
		ADC_Value = ADC_Read(1);		/* Read the status on Y-OUT pin using channel 0 */
		sprintf(buffer, "Y1=%d   ", ADC_Value);
		LCD_String_xy(1, 8, buffer);

		ADC_Value = ADC_Read(3);		/* First  */
		
		sprintf(buffer, "X2=%d   ", ADC_Value);
		LCD_String_xy(2, 0, buffer);

		ADC_Value = ADC_Read(4);
		sprintf(buffer, "Y2=%d   ", ADC_Value);
		LCD_String_xy(2, 8, buffer);
		
		//while(!gameover){
		
		 //"switching to(from) void" to unsigned char

		gamelogic();
	
		while(!TimerFlag){
			TimerFlag = 0;}

		

}
}
