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


	unsigned char x0 = 0; //player 1 x
	unsigned char x1 = 0; //player 2 x
	unsigned char y0 = 0; //player 1 y
	unsigned char y1 = 0; //player 2 y
	unsigned char way = 0; //direction
	unsigned char prevway = 0;
	 //previous direction

	unsigned char rex1 = 2; //right x edge 1, for border
	unsigned char rex2 = 3; //right x edge 2, for border
	unsigned char lex1 = 128; //left x edge 1, for border
	unsigned char lex2 = 129; //left x edge 2, for border

	unsigned char tey1 = 127; //top y edge 1, for border
	unsigned char tey2 = 128; //top y edge 2, for border
	unsigned char bey1 = 1; //bottom y edge 1, for border
	unsigned char bey2 = 2; //bottom y edge 2, for border

	unsigned char blockleft = 0;
	unsigned char blockright = 0;
	unsigned char blockup = 0;
	unsigned char blockdown = 0;


int main(void)
{
	DDRB = 0xFF; PORTB = 0x00;
	char buffer[20];
	int ADC_Value;
	TimerSet(10);
	TimerOn();

	x0 = 50;
	x1 = 90;
	y0 = 50;
	y1 = 50;
	prevway = 75;

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
	for(int i = 129; i >= 2; i--){
		LCD_SetPixel(i, 128, LCD_RED);
		LCD_SetPixel(i, 127, LCD_RED);
		LCD_SetPixel(i, 1, LCD_RED);
		LCD_SetPixel(i, 2, LCD_RED);
	}

	for(int v = 128; v >= 1; v--){
		LCD_SetPixel(129, v, LCD_RED);
		LCD_SetPixel(128, v, LCD_RED);
		LCD_SetPixel(2, v, LCD_RED);
		LCD_SetPixel(3, v, LCD_RED);
	}

	LCD_SetPixel(50, 50, LCD_BLUE );

	LCD_SetPixel(90, 50, LCD_MAGENTA );

	//Border definition


	

	
	
	ADC_Init();							/* ADC initialize function */
	LCD_Init16();							/* LCD initialize function */

	while(1){
		ADC_Value = ADC_Read(0);		/* Read the status on X-OUT pin using channel 0 */
		sprintf(buffer, "BL=%d   ", blockleft);
		LCD_String_xy(1, 0, buffer);
		
		ADC_Value = ADC_Read(1);		/* Read the status on Y-OUT pin using channel 0 */
		sprintf(buffer, "BR=%d   ", blockright);
		LCD_String_xy(1, 8, buffer);

		ADC_Value = ADC_Read(3);		/* First  */
		
		sprintf(buffer, "BU=%d   ", blockup);
		LCD_String_xy(2, 0, buffer);

		ADC_Value = ADC_Read(4);
		sprintf(buffer, "BD=%d   ", blockdown);
		LCD_String_xy(2, 8, buffer);
		jstest1(x0, y0);
		way = jstest2(); //"switching to(from) void" to unsigned char

		switch(way){  // using newly returned direction variable from char func to set direction
			case 0x01: //changing cases from 1 2 3 4 direction identifiers to notable opposites
				if(prevway == 0xFE || blockleft){// 0x01 is left
					blockleft = 1;
					blockright = 0;
					blockup = 0;
					blockdown = 0;
					break;
				}
				else {
					x1--;
					prevway = 0x01;
					blockright = 1;
				}
				break;

			case 0xFE: //0xFE is right
				if(prevway == 0x01 || blockright){
					blockleft = 0;
					blockright = 1;
					blockup = 0;
					blockdown = 0;
					break;
				}
				else {
					x1++;
					prevway = 0xFE;
				}
			break;

			case 0x02: // 0x02 is up
				if(prevway == 0xFD || blockup){
					blockleft = 0;
					blockright = 0;
					blockup = 1;
					blockdown = 0;
					break;
				}
				else {
					y1++;
					prevway = 0x02;
				}
			break;

			case 0xFD: // 0xFD is down
				if(prevway == 0x02 || blockdown){
					blockleft = 0;
					blockright = 0;
					blockup = 0;
					blockdown = 1;
					break;
				}
				else {
					y1--;
					prevway = 0xFD;
				}
			break;

			case 0:
			break;

			default:
			break;

		}
		/*
		if(prevway == 75){ //prevway initialized to 75 to have an init case
			prevway = way;
		}

		else if(way == ~prevway){
			prevway = prevway;
		}

		else {
			prevway = way;
			
		} */

		LCD_SetPixel(x1, y1, LCD_MAGENTA);
		LCD_SetPixel(x0, y0, LCD_BLUE);

		

		/*for(int i = 50; i > 0; i--){
		LCD_SetPixel(x, 0, LCD_MAGENTA );
		x++;
		
		LCD_SetPixel(20, y, LCD_BLUE );
		y++;



		} */

		//LCD_SetPixel(50, 50, LCD_BLUE );

		//LCD_SetPixel(90, 50, LCD_MAGENTA );

		//LCD_SetPixel(4, 2, LCD_RED );

		//LCD_SetPixel(126, -12, LCD_RED );

		//PORTB = led | led2; dont need no mo
		while(!TimerFlag){
			TimerFlag = 0;}

		

}
}