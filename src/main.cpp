#include "Arduino.h"
// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13
void setup(){
 pinMode(LED_BUILTIN, OUTPUT);
}
void loop(){
 digitalWrite(LED_BUILTIN, HIGH);
 delay(10000);
 digitalWrite(LED_BUILTIN, LOW);
 delay(10000);
}
//nihao-test