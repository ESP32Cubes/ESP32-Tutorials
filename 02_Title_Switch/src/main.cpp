#include <Arduino.h>

#define TILT_PIN 34 // Define the pin connected to the tilt sensor

void setup()
{
  Serial.begin(115200);     // Start the serial monitor
  pinMode(TILT_PIN, INPUT); // Set GPIO 34 as an input pin
}

void loop()
{
  int digitalValue = digitalRead(TILT_PIN); // Read the digital signal from pin 34

  // Print "off" if the value is 1, otherwise print "on"
  if (digitalValue == 1)
  {
    Serial.println("off");
  }
  else
  {
    Serial.println("on");
  }

  delay(1000); // Wait for 1 second
}
