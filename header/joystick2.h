//joystick header

#ifndef JOYSTICK2_H
#define JOYSTICK2_H

#include "ADC_H.h"
#include "ILI9163.h"

unsigned char _left = 0;

unsigned char _right = 0;

unsigned char _up = 0;

unsigned char _down = 0;

unsigned char led = 0x00;

unsigned short x;

unsigned short y;

unsigned char _left2 = 0;

unsigned char _right2 = 0;

unsigned char _up2 = 0;

unsigned char _down2 = 0;

unsigned char led2 = 0x00;

unsigned short x2;

unsigned short y2; //if anything goes wrong delete duplicates and restart


void jstest1(unsigned char i, unsigned char j){ // where i = x coord, j = y coord

    x = ADC_Read(0);

    y = ADC_Read(1);

    if(x > 900){

        led = 0x08;

        _left = 1; //left

        i--;

    }

    else if(x < 300){

        led = 0x04; //right

        _right = 1;

        i++;

    }

    else if(y < 300){

        led = 0x02; //up

        _up = 1;

        j++;

    }

    else if(y > 900 ){

        led = 0x01; //down

        _down = 1;

        j--;

    }

    else{

        led = 0x00;

        _left = 0;

        _right = 0;

        _down = 0;

        _up = 0;


    }

    //LCD_SetPixel(i, j, LCD_BLUE);

}

unsigned char jstest2(){

    unsigned char direction;

    x2 = ADC_Read(3);

    y2 = ADC_Read(4);

    if(x2 > 900){

        led2 = 0x80;

        direction = 1; //left

    }

    else if(x2 < 300){

        led2 = 0x40; //right

        direction = 2;

    }

    else if(y2 < 300){

        led2 = 0x20; //up

        direction = 3; 

    }

    else if(y2 > 900 ){

        led2 = 0x10; //down

        direction = 4;

    }

    else{

        direction = 0;

    }

    return direction;

    //LCD_SetPixel(k, l, LCD_MAGENTA);

}

#endif