#include <Arduino.h>

int buzzer = 12;
int delayTime = 200;

void play_C();
void play_D();
void play_E();

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  while (1) {
    delay(2000);
    play_E();
    play_D();
    play_C();
    play_D();
    play_E();
    play_E();
    play_E();
    delay(200);
    play_D();
    play_D();
    play_D();
    delay(200);
    play_E();
    play_E();
    play_E();
    delay(200);
    play_E();
    play_D();
    play_C();
    play_D();
    play_E();
    play_E();
    play_E();
    play_C();
    play_D();
    play_D();
    play_E();
    play_D();
    play_C();
  }
}

void play_E() {
  unsigned char i;
  for (i=0; i<120; i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(3038/2);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(3038/2);
  }
  delay(delayTime);
}

void play_D() {
  unsigned char i;
  for (i=0; i<80; i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(3400/2);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(3400/2);
  }
  delay(delayTime);
}

void play_C() {
  unsigned char i;
  for (i=0; i<100;i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(3830/2);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(3830/2);
  }
  delay(delayTime);
}