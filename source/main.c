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
#include "joystick2test.h"		//joystick led function// going to tweak
#include "timer.h"			//timer 


	
	//unsigned char tron[129][128];
	unsigned char test = 0;
	

int main(void)
{
	DDRB = 0xFF; PORTB = 0x00;
	char buffer[20];
	//int ADC_Value;
	TimerSet(1);
	TimerOn();

	
	initGame();

	//unsigned char tron[128][127];

	for (int f = 0; f < 128; f++){
    for(int g = 0; g < 127; g++){
        tron[f][g] = 0;
    }
}
/*
for(int s = 128; s >= 3; s--){ //x
        //tron[s][128] = 1;
        tron[s][127] = 1;
        //tron[s][1] = 1;
        tron[s][2] = 1;
    }

for(int a = 127; a >= 2; a--){ //y
        //tron[129][a] = 1;
        tron[128][a] = 1;
        //tron[2][a] = 1;
        tron[3][a] = 1;
    } */
	//troninit();

	//Border definition


	

	
	
	ADC_Init();							/* ADC initialize function */
	LCD_Init16();							/* LCD initialize function */

	while(1){
		//test = tron[54][54];

		//ADC_Value = ADC_Read(0);		/* Read the status on X-OUT pin using channel 0 */
		

		sprintf(buffer, "X=%d   ", x1);
		LCD_String_xy(1, 0, buffer);

		sprintf(buffer, "Y=%d   ", y1);
		LCD_String_xy(1, 6, buffer);

		sprintf(buffer, "GO=%d   ", gameover);
		LCD_String_xy(1, 12, buffer);

		sprintf(buffer, "X2=%d   ", x0);
		LCD_String_xy(2, 0, buffer);

		sprintf(buffer, "Y2=%d   ", y0);
		LCD_String_xy(2, 6, buffer);

		sprintf(buffer, "P=%d   ", player);
		LCD_String_xy(2, 13, buffer);
		
		//ADC_Value = ADC_Read(1);		/* Read the status on Y-OUT pin using channel 0 */
		//sprintf(buffer, "P=%d   ", player);
		//LCD_String_xy(1, 8, buffer);

		//ADC_Value = ADC_Read(3);		/* First  */
		
		//sprintf(buffer, "X1=%d   ", x1);
		//LCD_String_xy(2, 0, buffer);

		//ADC_Value = ADC_Read(4);
		//sprintf(buffer, "Y1=%d   ", y1);
		//LCD_String_xy(2, 8, buffer);

		if(gameover){
			break;
		}
		
		//while(!gameover){
		
		 //"switching to(from) void" to unsigned char
		tron[90][50] = 1;
		tron[50][50] = 1;
		gamelogic();

		
	
		while(!TimerFlag){
			TimerFlag = 0;}

		

}
}
