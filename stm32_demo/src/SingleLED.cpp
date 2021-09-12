
#include <Arduino.h>

#include "SingleLED.h"

void SingleLED::turn_on() {
    digitalWrite(pin, HIGH);
};

void SingleLED::turn_off() {
    digitalWrite(pin, LOW);
};
