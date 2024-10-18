#define buzzer 12

#include <Mouse.h>

int x = 0;
int y = 0;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  int moveX = random(1,15);
  int moveY = random(1,15);

  int flipX = random(0,2);
  if (flipX == 0){
    moveX = moveX * -1;
  }

  int flipY = random(0,2);
  if (flipY == 0){
    moveY = moveY * -1;
  }

  x += moveX;
  y += moveY;

  if (x < 0){
    x = 0;
  }

  if (y < 0){
    y = 0;
  }

  if (x > 1920){
    x = 1920;
  }

  if (y > 1080){
    y = 1080;
  }
  
  Serial.println(String(moveX) + " " + String(moveY));

  delay(50);

  //Mouse.move(moveX, moveY);
}