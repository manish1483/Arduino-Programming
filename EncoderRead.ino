/* Encoder Library - Basic Example
   http://www.pjrc.com/teensy/td_libs_Encoder.html

   This example code is in the public domain.
*/

long newPosition;

#include <Encoder.h>

// Change these two numbers to the pins connected to your encoder.
// Best Performance: both pins have interrupt capability
// Good Performance: only the first pin has 76interrupt capability
// Low Performance:  neither pin has interrupt capability
Encoder myEnc(2, 3);
// avoid using pins with LEDs attached

void setup() {
  Serial.begin(57600);
 
 //Serial.println("Basic Encoder Test:");
 }

long oldPosition  = -999;

void loop() {

   newPosition = myEnc.read();
 //if (newPosition != oldPosition) {
  //oldPosition = newPosition;
  //if(((newPosition/4)>5000) || ((newPosition/4)<-5000))
  //newPosition=0;

  Serial.print(newPosition / 4);
  Serial.print(":");
  delay(400);
}
