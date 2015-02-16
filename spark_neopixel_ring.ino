#include "neopixel.h"
#include "math.h"

#define PI 3.14159265359

Adafruit_NeoPixel ring = Adafruit_NeoPixel(16, D3, WS2812);
float genStep = 0;

void setup()
{
  ring.begin();
}

void loop() {
  genStep = genStep + PI/300;
  setValues(genStep);
}

void setValues(float useStep){
  float stepR = ( 2 *  PI)/16;

  float stepG = ( 5 * PI)/16;
  float stepB = ( 3 *  PI)/16;
  float step_init = useStep;
  for(int i=0;i<16;i++){
    float final_stepR = step_init + (stepR * i);
    float final_stepB = step_init  + (stepB * i);
    float final_stepG = step_init + (stepG * i);
    int r =  255 - abs(sin(final_stepR)* 255);
    int g =  255 - abs(cos(final_stepG)* 255);
    int b =  0; //255 - abs(cos(final_stepB)* 255);
    ring.setPixelColor(pixelIndex(i), ring.Color(r,g,b)); // Moderately bright green color.
  }
  ring.show(); // This sends the updated pixel color to the hardware.
}

int  pixelIndex(int ledNum){
  return (ledNum + 1) % 16;
}
