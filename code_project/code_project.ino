#include <Keyboard.h>

#define axis_X A2
#define axis_Y A1
#define MOVEMENT_DELAY 2 

void setup() {
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  joystick();
}

void joystick() {
  int VRX = analogRead(axis_X);
  int VRY = analogRead(axis_Y);

  if (VRY > 750) {
    Keyboard.write(KEY_DOWN_ARROW);
    delay(MOVEMENT_DELAY);
  } 
  else if (VRY < 250) {
    Keyboard.write(KEY_UP_ARROW);
    delay(MOVEMENT_DELAY);
  } 
  else if (VRX > 750) {
    Keyboard.write(KEY_RIGHT_ARROW);
    delay(MOVEMENT_DELAY);
  } 
  else if (VRX < 250) {
    Keyboard.write(KEY_LEFT_ARROW);
    delay(MOVEMENT_DELAY);
  }
}
