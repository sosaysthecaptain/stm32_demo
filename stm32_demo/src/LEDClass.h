#include <MultiStepper.h>
#include <AccelStepper.h>
#include <Arduino.h>

#include "pins.h"

#include "SingleLED.h"



class LEDClass {
    public:
        SingleLED first_led;

    public:
        void blink_first(int duration);




        // void read_pins();
        // void read_concise();
        // void read_sensors();
        // void off();
        // void flash(String args[10]);
        // void set(String args[10]);
        // void set_for(String args[10]);
};
