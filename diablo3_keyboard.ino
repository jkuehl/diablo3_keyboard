#include <Keyboard.h>
#include <Mouse.h>

void setup() {
  // make pin 2 an input and turn on the
  // pullup resistor so it goes LOW unless
  // connected to ground:
  pinMode(2, INPUT_PULLUP); // button 1
  pinMode(3, INPUT_PULLUP); // button 2
  pinMode(4, INPUT_PULLUP); // mouse left
  pinMode(5, INPUT_PULLUP); // button 3
  pinMode(6, INPUT_PULLUP); // button 4
  pinMode(7, INPUT_PULLUP); // mouse right
  Keyboard.begin();
  Mouse.begin();
}

void loop() {
  if (digitalRead(2) == LOW) { delay(33); Keyboard.print("1"); delay(33); }
  if (digitalRead(3) == LOW) { delay(33); Keyboard.print("2"); delay(33); }
  if (digitalRead(5) == LOW) { delay(33); Keyboard.print("3"); delay(33); }
  if (digitalRead(6) == LOW) { delay(33); Keyboard.print("4"); delay(33); }
  if (digitalRead(4) == LOW) { Mouse.click(MOUSE_LEFT); }
  if (digitalRead(7) == LOW) { Mouse.click(MOUSE_RIGHT); }
}
