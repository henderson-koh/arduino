#include <Arduino.h>

// Define pins
#define RED 6
#define GREEN 5
#define BLUE 3

// Define prototype function
void update_RGB(int redValue, int greenValue, int blueValue);

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  // digitalWrite(RED, HIGH);
  // digitalWrite(GREEN, HIGH);
  // digitalWrite(BLUE, HIGH);
}

int redValue;
int greenValue;
int blueValue;

void loop() {

  update_RGB(0, 0, 0);
  delay(2000);

  // put your main code here, to run repeatedly:
  #define delayTime 50

  redValue = 0;
  greenValue = 0;
  blueValue = 0;

  update_RGB(redValue, greenValue, blueValue);

  redValue = 255;
  // R: 255
  // G: 0
  // B: 0

  // Red to Orange
  for (int i=0; i<127; i++) {
    greenValue++;
    update_RGB(redValue, greenValue, blueValue);
    delay(delayTime);
  }
  update_RGB(0, 0, 0);
  delay(1000);
  // R: 255
  // G: 127
  // B: 0

  // Orange to Yellow
  for (int i=128; i<256; i++) {
    greenValue++;
    update_RGB(redValue, greenValue, blueValue);
    delay(delayTime);
  }
  update_RGB(0, 0, 0);
  delay(1000);
  // R: 255
  // G: 255
  // B: 0

  // Yellow to Green
  for (int i=0; i<255; i++) {
    redValue--;
    update_RGB(redValue, greenValue, blueValue);
    delay(delayTime);
  }
  update_RGB(0, 0, 0);
  delay(1000);
  // R: 0
  // G: 255
  // B: 0

  // Green to Blue
  for (int i=0; i<255; i++) {
    greenValue--;
    blueValue++;
    update_RGB(redValue, greenValue, blueValue);
    delay(delayTime);
  }
  update_RGB(0, 0, 0);
  delay(1000);
  // R: 0
  // G: 0
  // B: 255

  // Blue to Indigo
  for (int i=0; i<125; i++) {
    if (i % 5 < 3) {
      redValue++;
    }
    blueValue--;
    update_RGB(redValue, greenValue, blueValue);
    delay(delayTime);
  }
  update_RGB(0, 0, 0);
  delay(1000);
  // R: 75
  // G: 0
  // B: 130

  // Indigo to Purple
  for (int i=0; i<80; i++) {
    redValue++;
    blueValue++;
    update_RGB(redValue, greenValue, blueValue);
    delay(delayTime);
  }
  update_RGB(0, 0, 0);
  delay(1000);
  // R: 155
  // G: 0
  // B: 210

  update_RGB(0, 0, 0);
  delay(2000);

}

void update_RGB(int redValue, int greenValue, int blueValue) {
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
}