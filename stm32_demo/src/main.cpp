#include <Arduino.h>

void setup() {

  Serial.begin(115200);
  Serial.flush();
}

void loop() {
  Serial.println("it's working");
  delay(1000);
}