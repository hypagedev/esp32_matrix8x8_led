//ace and a happy face. Upload the following code to your board:

/*
 Created by Rui Santos
 
 All the resources for this project:
 http://randomnerdtutorials.com/
*/

#include "LedControl.h"
#include "binary.h"

/*
 DIN connects to pin 23
 CLK connects to pin 18
 CS connects to pin 15 
*/
LedControl lc=LedControl(23,18,15,1);

// delay time between faces
unsigned long delaytime=800;

const byte IMAGES[][8] = {
{
  B00010000,
  B00111000,
  B00010000,
  B00111000,
  B01010100,
  B10010010,
  B00101000,
  B01000100
},{
  B00010000,
  B00111000,
  B00010000,
  B00111010,
  B01010100,
  B10010000,
  B00101000,
  B01000100
},{
  B00010000,
  B00111000,
  B00010000,
  B10111010,
  B01010100,
  B00010000,
  B00101000,
  B01000100
},{
  B00010000,
  B00111000,
  B00010010,
  B10111100,
  B01010000,
  B00010000,
  B00101000,
  B01000100
},{
  B00010000,
  B00111000,
  B10010010,
  B01111100,
  B00010000,
  B00010000,
  B00101000,
  B01000100
},{
  B00010000,
  B00111010,
  B10010100,
  B01111000,
  B00010000,
  B00010000,
  B00101000,
  B01000100
},{
  B00010000,
  B10111010,
  B01010100,
  B00111000,
  B00010000,
  B00010000,
  B00101000,
  B01000100
},{
  B00010000,
  B10111000,
  B01010000,
  B00111000,
  B00010110,
  B00010000,
  B00101000,
  B01000100
},{
  B00010000,
  B00111010,
  B00010100,
  B00111000,
  B01010000,
  B10010000,
  B00101000,
  B01000100
},{
  B00010000,
  B00111010,
  B00010100,
  B00111000,
  B01010000,
  B10010000,
  B00101100,
  B01000000
},{
  B00010000,
  B10111000,
  B01010000,
  B00111000,
  B00010100,
  B00010010,
  B01101000,
  B00000100
},{
  B00010000,
  B10111010,
  B01010100,
  B00111000,
  B00010000,
  B01111100,
  B00000000,
  B00000000
},{
  B00010000,
  B00111000,
  B00010000,
  B00111000,
  B01010100,
  B10010010,
  B00101000,
  B01000100
},{
  B00010000,
  B00111000,
  B00010000,
  B00111000,
  B01010100,
  B10010010,
  B00101000,
  B01000100
},{
  B00111100,
  B01000010,
  B10100101,
  B10000001,
  B10100101,
  B10011001,
  B01000010,
  B00111100
},{
  B00011111,
  B00010001,
  B00010101,
  B11110001,
  B10001111,
  B10101000,
  B10001000,
  B11111000
}
,{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
}};
const int IMAGES_LEN = sizeof(IMAGES)/8;

void setup() {
  lc.shutdown(0,false);
  // Set brightness to a medium value
  lc.setIntensity(0,8);
  // Clear the display
  lc.clearDisplay(0);  
}

void draw(){
  // Display sad face

  for(int i=0; i < IMAGES_LEN; i++){
    for(int j=0; j < 8; j++)
      lc.setRow(0,j,IMAGES[i][j]);
    delay(delaytime);

  }
  

}

void loop(){
  draw();
}
