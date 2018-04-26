#define BTN1_PIN 16
#define BTN2_PIN 14
#define LED1_PIN 7
#define LED2_PIN 5

void initUI(){
  pinMode(BTN1_PIN, INPUT_PULLUP);
  pinMode(BTN2_PIN, INPUT_PULLUP);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, 0);
  digitalWrite(LED2_PIN, 0);
}

void setLED1(bool n){
  digitalWrite(LED1_PIN, n);
}

void setLED2(bool n){
  digitalWrite(LED2_PIN, n);
}

void setLED1_PWM(unsigned char n){
  analogWrite(LED1_PIN, n);
}

bool getBTN1(){
  return digitalRead(BTN1_PIN);
}

bool getBTN2(){
  return digitalRead(BTN2_PIN);
}
