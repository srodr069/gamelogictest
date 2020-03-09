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

unsigned char x0 = 0; //player 1 x
    unsigned char x1 = 0; //player 2 x
    unsigned char y0 = 0; //player 1 y
    unsigned char y1 = 0; //player 2 y
    unsigned char way = 0; //direction
    unsigned char prevway = 0;

    unsigned char way1 = 0; //direction
    unsigned char prevway1 = 0;
     //previous direction

    /*unsigned char rex1 = 2; //right x edge 1, for border
    unsigned char rex2 = 3; //right x edge 2, for border
    unsigned char lex1 = 128; //left x edge 1, for border
    unsigned char lex2 = 129; //left x edge 2, for border

    unsigned char tey1 = 127; //top y edge 1, for border
    unsigned char tey2 = 128; //top y edge 2, for border
    unsigned char bey1 = 1; //bottom y edge 1, for border
    unsigned char bey2 = 2; //bottom y edge 2, for border
*/
    unsigned char blockleft = 0;
    unsigned char blockright = 0;
    unsigned char blockup = 0;
    unsigned char blockdown = 0;

    unsigned char blockleft1 = 0;
    unsigned char blockright1 = 0;
    unsigned char blockup1 = 0;
    unsigned char blockdown1 = 0;

    unsigned char gameover = 0;
    unsigned char tie = 0;
    unsigned char player = 0;

    unsigned char tron[128][127];



unsigned char jstest2(){

    unsigned char direction;

    x2 = ADC_Read(3);

    y2 = ADC_Read(4);

    if(x2 > 900){

        led2 = 0x80;

        direction = 0x01; //left

    }

    else if(x2 < 300){

        led2 = 0x40; //right

        direction = 0xFE;

    }

    else if(y2 < 300){

        led2 = 0x20; //up

        direction = 0x02; 

    }

    else if(y2 > 900 ){

        led2 = 0x10; //down

        direction = 0xFD;

    }

    else{

        //direction = 0;

    }

    return direction;

    //LCD_SetPixel(k, l, LCD_MAGENTA);

}

unsigned char jstest1(){

    unsigned char direction1;

    x = ADC_Read(0);

    y = ADC_Read(1);

    if(x > 900){

        led2 = 0x80;

        direction1 = 0x01; //left

    }

    else if(x < 300){

        led2 = 0x40; //right

        direction1 = 0xFE;

    }

    else if(y < 300){

        led2 = 0x20; //up

        direction1 = 0x02; 

    }

    else if(y > 900 ){

        led2 = 0x10; //down

        direction1 = 0xFD;

    }

    else{

        //direction = 0;

    }

    return direction1;

    //LCD_SetPixel(k, l, LCD_MAGENTA);

}

void gamelogic(){
    way1 = jstest1();

        //way is for player 1 
        //should be magenta

        //way1 is for player 2
        //should be blue


        switch(way1){  // using newly returned direction variable from char func to set direction
            case 0x01: //changing cases from 1 2 3 4 direction identifiers to notable opposites
                if(prevway == 0xFE || blockleft){// 0x01 is left
                    blockleft = 0;              //for whatever reason when going left, blockleft is set to 1, but movement does not stop, everything functions correctly,but this only happens on left/right, not up down/
                    blockright = 0;
                    blockup = 0;
                    blockdown = 0;
                    break;
                }
                else {                          // if the new direction is accepted, your previous direction becomes this, and u block the oposing direction
                    x0--;
                    prevway = 0x01;
                    blockright = 1;
                }

                if((tron[x0][y0] == 1)||(x0 == 3)||(x0 == 128)){
                    gameover = 1;
                    player = 2;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x0][y0] = 1;
                    LCD_SetPixel(x0, y0, LCD_MAGENTA);


                }
                break;

            case 0xFE: //0xFE is right
                if(prevway == 0x01 || blockright){ //after being unsuccessful with a check after the switch
                    blockleft = 0;                  // i tried to implement a previous direction check in the switch itself
                    blockright = 0;                 //if u went right previously u should be unable to go left
                    blockup = 0;
                    blockdown = 0;
                    break;
                }
                else {
                    x0++;
                    prevway = 0xFE;
                    blockleft = 1;
                }

                if((tron[x0][y0] == 1)||(x0 == 3)||(x0 == 128)){
                    gameover = 1;
                    player = 2;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x0][y0] = 1;
                    LCD_SetPixel(x0, y0, LCD_MAGENTA);


                }
            break;

            case 0x02: // 0x02 is up
                if(prevway == 0xFD || blockup){
                    blockleft = 0;
                    blockright = 0;
                    blockup = 0;
                    blockdown = 0;
                    break;
                }
                else {
                    y0++;
                    prevway = 0x02;
                    blockdown = 1;
                }

                if((tron[x0][y0] == 1)||(y0 == 127)||(y0 == 2)){
                    gameover = 1;
                    player = 2;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x0][y0] = 1;
                    LCD_SetPixel(x0, y0, LCD_MAGENTA);


                }
            break;

            case 0xFD: // 0xFD is down
                if(prevway == 0x02 || blockdown){
                    blockleft = 0;
                    blockright = 0;
                    blockup = 0;
                    blockdown = 0;
                    break;
                }
                else {
                    y0--;
                    prevway = 0xFD;
                    blockup = 1;
                }

                if((tron[x0][y0] == 1)||(y0 == 127)||(y0 == 2)){
                    gameover = 1;
                    player = 2;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x0][y0] = 1;
                    LCD_SetPixel(x0, y0, LCD_MAGENTA);


                }
            break;

            case 0:
            break;

            default:
            break;

        }

        
/*
        if(x0 == 3){
            gameover = 1;
            player = 1;
        }

        else if(x0 == 128){
            gameover = 1;
            player = 1;
        }

        if(y0 == 2){
            gameover = 1;
            player = 1;
        }

        if(y0 == 127){
            gameover = 1;
            player = 1;
        }

        if(tron[x0][y0] == 0){
            LCD_SetPixel(x0, y0, LCD_MAGENTA);
            
            tron[x0][y0] = 1;
        }

        else{
            gameover = 1;
            player = 1;
        }
        */
        way = jstest2();

        switch(way){  // using newly returned direction variable from char func to set direction
            case 0x01: //changing cases from 1 2 3 4 direction identifiers to notable opposites
                if(prevway1 == 0xFE || blockleft1){// 0x01 is left
                    blockleft1 = 0;             //for whatever reason when going left, blockleft is set to 1, but movement does not stop, everything functions correctly,but this only happens on left/right, not up down/
                    blockright1 = 0;
                    blockup1 = 0;
                    blockdown1 = 0;
                    break;
                }
                else {                          // if the new direction is accepted, your previous direction becomes this, and u block the oposing direction
                    x1--;
                    prevway1 = 0x01;
                    blockright1 = 1;
                }

                if((tron[x1][y1] == 1)||(x1 == 3)||(x1 == 128)){
                    gameover = 1;
                    player = 1;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x1][y1] = 1;
                    LCD_SetPixel(x1, y1, LCD_BLUE);

                }
                break;

            case 0xFE: //0xFE is right
                if(prevway1 == 0x01 || blockright1){ //after being unsuccessful with a check after the switch
                    blockleft1 = 0;                 // i tried to implement a previous direction check in the switch itself
                    blockright1 = 0;                    //if u went right previously u should be unable to go left
                    blockup1 = 0;
                    blockdown1 = 0;
                    break;
                }
                else {
                    x1++;
                    prevway1 = 0xFE;
                    blockleft1 = 1;
                }

                if((tron[x1][y1] == 1)||(x1 == 3)||(x1 == 128)){
                    gameover = 1;
                    player = 1;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x1][y1] = 1;
                    LCD_SetPixel(x1, y1, LCD_BLUE);


                }
            break;

            case 0x02: // 0x02 is up
                if(prevway1 == 0xFD || blockup1){
                    blockleft1 = 0;
                    blockright1 = 0;
                    blockup1 = 0;
                    blockdown1 = 0;
                    break;
                }
                else {
                    y1++;
                    prevway1 = 0x02;
                    blockdown1 = 1;
                }

                if((tron[x1][y1] == 1)||(y1 == 127)||(y1 == 2)){
                    gameover = 1;
                    player = 1;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x1][y1] = 1;
                    LCD_SetPixel(x1, y1, LCD_BLUE);

                }
            break;

            case 0xFD: // 0xFD is down
                if(prevway1 == 0x02 || blockdown1){
                    blockleft1 = 0;
                    blockright1 = 0;
                    blockup1 = 0;
                    blockdown1 = 0;
                    break;
                }
                else {
                    y1--;
                    prevway1 = 0xFD;
                    blockup1 = 1;
                }

                if((tron[x1][y1] == 1)||(y1 == 127)||(y1 == 2)){
                    gameover = 1;
                    player = 1;
                }

                else {
                    gameover = 0;
                    player = 0;
                    tron[x1][y1] = 1;
                    LCD_SetPixel(x1, y1, LCD_BLUE);

                }
            break;

            case 0:
            break;

            default:
            break;

        }
        
                /*
        if(tron[x1][y1] == 0){
            LCD_SetPixel(x1, y1, LCD_BLUE);
            tron[x1][y1] = 1;
        }

        else{
            if(player == 1){
                gameover = 1;
                tie = 1;
            }

            else {
            gameover = 1;
            player = 2;
            }

        } 
*/
        

        
}

void initGame(){
    x0 = 97;
    x1 = 35;
    y0 = 62;
    y1 = 62;
    prevway = 75;
    prevway1 = 75;

    



    

    LCD_init();
    LCD_FillScreen( LCD_RGB(0,0,0) );
    /*LCD_Orientation(LCD_ROT_0);       gotta find xy setup
    _delay_ms(70);
    LCD_Orientation(LCD_ROT_180);
    _delay_ms(70);
    LCD_Orientation(LCD_ROT_0);
    _delay_ms(70);
    LCD_Orientation(LCD_ROT_180);
    _delay_ms(70);
    //LCD_Orientation(LCD_ROT_0);
    */

    //this can all go in a game init function
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

    LCD_SetPixel(97, 62, LCD_BLUE );
    //tron[90][50] = 1;

    LCD_SetPixel(35, 62, LCD_MAGENTA );
    //tron[50][50] = 1;
}

/*    for (int f = 0; f < 128; f++){
    for(int g = 0; g < 127; g++){
        tron[f][g] = 0;
    }
}

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
    

#endif