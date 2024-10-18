#include <Mouse.h>

const int delayMilliseconds = 50;
const int maxMovementPerTick = 15;

void setup() {
  
}

void loop() {
  
  int moveX = random(1, maxMovementPerTick + 1); // + 1 since Max value is not inclusive
  int moveY = random(1, maxMovementPerTick + 1);

  int flipX = random(0,2);
  if (flipX == 0){
    moveX = moveX * -1;
  }

  int flipY = random(0,2);
  if (flipY == 0){
    moveY = moveY * -1;
  }
  
  Serial.println(String(moveX) + " " + String(moveY));

  delay(delayMilliseconds);

  Mouse.move(moveX, moveY);
}