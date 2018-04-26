void setup(){
  initUI();
  initServo();
  initCNY();
  initMotors();
}

void loop(){
  setMotors(1000);
}
