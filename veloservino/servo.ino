#include <Servo.h>
#define SERVO_PIN 10

Servo servo;

const int rServo = 990;
const int cServo = 1390;
const int lServo = 1790;

void initServo(){
  servo.attach(SERVO_PIN);
  servo.writeMicroseconds(cServo);
}

void setServo(int i){
  int x = map(i, -100, 100, lServo, rServo);
  if(i <= -100) x = lServo;
  if(i >= 100) x = rServo;
  if(i == 0) x = cServo;
  servo.writeMicroseconds(x);
}
