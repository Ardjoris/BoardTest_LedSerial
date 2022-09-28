// put line monitor_speed = 115200   in platformio.ini


#include "Arduino.h"

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);    // Initialize the LED_BUILTIN pin as an output                                   
  digitalWrite(LED_BUILTIN, HIGH); // Ensure LED is off
  Serial.begin(115200);            // Set comm rate to 115200
}

void loop()
{

  digitalWrite(LED_BUILTIN, HIGH); // Turn LED Off
  Serial.println("LED High ");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED Low");
  delay(1000);
}
