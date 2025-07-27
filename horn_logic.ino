#include <SoftwareSerial.h>
#include <TinyGPS++.h>

TinyGPSPlus gps;
SoftwareSerial ss(4, 3); // RX, TX for GPS

int hornPin = 8;
int speedSensorPin = 2;
volatile int speedCount = 0;

void setup() {
  pinMode(hornPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(speedSensorPin), countSpeed, RISING);
  Serial.begin(9600);
  ss.begin(9600);
}

void loop() {
  while (ss.available()) {
    gps.encode(ss.read());
  }

  int speed = calculateSpeed(); // logic from sensor counts
  int hour = gps.time.hour();

  // Simple Logic
  if (speed < 10 && hour > 22 && hour < 6) {
    digitalWrite(hornPin, LOW); // disable horn
  } else {
    digitalWrite(hornPin, HIGH); // horn enabled
  }
}

void countSpeed() {
  speedCount++;
}
