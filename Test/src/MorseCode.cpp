#include <Arduino.h>

#define RED 6
#define DOT 50
#define DASH 150
#define LETTER_SEP 150
#define WORD_SEP 350

String output_string = "Hello World";

void setup() {
  pinMode(RED, OUTPUT);
  Serial.print("test");
}

void loop() {
//  flash_Morse(str_to_Morse(output_string));
}

String str_to_Morse(String msg) {
  String out = "";
  int idx;
  for (idx=0; idx<msg.length(); idx++) {
    if (msg.charAt(idx) == 'H') {
      out += "....";
    } else if (msg.charAt(idx) == 'E') {
      out += ".";
    } else if (msg.charAt(idx) == 'L') {
      out += ".-..";
    } else if (msg.charAt(idx) == 'O') {
      out += "---";
    } else if (msg.charAt(idx) == ' ') {
      out += " ";
    }
  }

  return out;
}

void flash_Morse(String morse) {
  int idx;
  for (idx=0; idx<morse.length(); idx++) {
    if (morse.charAt(idx) == '.') {
      flash_Morse_dot();
    } else if (morse.charAt(idx) == '-') {
      flash_Morse_dash();
    }
    delay(LETTER_SEP);
  }
}

void flash_Morse_dot() {
  digitalWrite(RED, HIGH);
  delay(DOT);
  digitalWrite(RED, LOW);
}

void flash_Morse_dash() {
  digitalWrite(RED, HIGH);
  delay(DASH);
  digitalWrite(RED, LOW);
}