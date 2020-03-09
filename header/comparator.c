unsigned char jstest1(){

    unsigned char direction1;

    x = ADC_Read(1);

    y = ADC_Read(2);

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


switch(way1){  // using newly returned direction variable from char func to set direction
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
            break;

            case 0:
            break;

            default:
            break;

        }