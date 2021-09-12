#include <Arduino.h>

#include "LEDClass.h"

void LEDClass::blink_first(int duration) {
    first_led.turn_on();
    delay(duration);
    first_led.turn_off();
    delay(duration);



};
