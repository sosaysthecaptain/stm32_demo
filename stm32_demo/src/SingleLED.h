#ifndef SINGLELED_H
#define SINGLELED_H

#include <Arduino.h>

class SingleLED {
    public:
        int pin;

    public:
        void turn_on();
        void turn_off();


};

#endif