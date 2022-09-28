// put line monitor_speed = 115200   in platformio.ini

#include "Arduino.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);       // Initialize the LED_BUILTIN pin as an output
 // pinMode(BUTTON_PIN, INPUT_PULLUP);  // Initialize button pin with built-in pullup.
  digitalWrite(LED_BUILTIN, HIGH);    // Ensure LED is off
  Serial.begin(115200);               // Set comm rate to 115200

 
}

void loop() {
  
    digitalWrite(LED_BUILTIN, HIGH);    // Turn LED Off 
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
