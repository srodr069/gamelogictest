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
#include "joystick.h"		//joystick led function// going to tweak
#include "timer.h"			//timer 

int main(void)
{
	DDRB = 0xFF; PORTB = 0x00;
	char buffer[20];
	int ADC_Value;
	TimerSet(1);
	TimerOn();

	unsigned char x = 20;
	unsigned char y = 0;

	LCD_init();
	LCD_FillScreen( LCD_RGB(0,0,0) );
	/*LCD_Orientation(LCD_ROT_0);		gotta find xy setup
	_delay_ms(70);
	LCD_Orientation(LCD_ROT_180);
	_delay_ms(70);
	LCD_Orientation(LCD_ROT_0);
	_delay_ms(70);
	LCD_Orientation(LCD_ROT_180);
	_delay_ms(70);
	//LCD_Orientation(LCD_ROT_0);
	*/

	

	
	
	ADC_Init();							/* ADC initialize function */
	LCD_Init16();							/* LCD initialize function */

	while(1){
		ADC_Value = ADC_Read(0);		/* Read the status on X-OUT pin using channel 0 */
		sprintf(buffer, "X=%d   ", ADC_Value);
		LCD_String_xy(1, 0, buffer);
		
		ADC_Value = ADC_Read(1);		/* Read the status on Y-OUT pin using channel 0 */
		sprintf(buffer, "Y=%d   ", ADC_Value);
		LCD_String_xy(1, 8, buffer);

		ADC_Value = ADC_Read(3);		/* First  */
		
		sprintf(buffer, "X2=%d   ", ADC_Value);
		LCD_String_xy(2, 0, buffer);

		ADC_Value = ADC_Read(4);
		sprintf(buffer, "Y2=%d   ", ADC_Value);
		LCD_String_xy(2, 8, buffer);
		js();
		js2();

		for(int i = 50; i > 0; i--){
		LCD_SetPixel(x, 0, LCD_MAGENTA );
		x++;
		
		LCD_SetPixel(20, y, LCD_BLUE );
		y++;



		}

		LCD_SetPixel(50, 50, LCD_BLUE );

		LCD_SetPixel(90, 50, LCD_MAGENTA );

		LCD_SetPixel(4, 2, LCD_RED );

		LCD_SetPixel(126, -12, LCD_RED );

		//PORTB = led | led2; dont need no mo
		while(!TimerFlag){
			TimerFlag = 0;}

		

}
}