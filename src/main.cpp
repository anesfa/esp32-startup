#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Tengo flojera de programar");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(".");
  delay(500);
}

