
#include "DigiKeyboard.h"
int analogPin = 7;                // Analog in pin 
int val = 0;
void setup()
{
  pinMode(1, OUTPUT);             // LED pin as output
}

void loop()
{
  val = analogRead(analogPin);    // read the input pin
  //DigiKeyboard.println(val);    // for debug
  if (val <= 950) {
    DigiKeyboard.println(" ");    // Space bar input for Game
    digitalWrite(1, HIGH);        // LED HIGH for debug 
  }
  else {
    digitalWrite(1, LOW);         // LED Low if nothing
  }
}
