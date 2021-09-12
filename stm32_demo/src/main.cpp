#include <Arduino.h>

#include "pins.h"
#include "LEDClass.h"
#include "SingleLED.h"

LEDClass LEDs;
SingleLED first_led;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  first_led.pin = LED_BUILTIN;


  Serial.begin(115200);
  Serial.flush();
}

void loop() {
  Serial.println("it's working");

  LEDs.blink_first(100);
}