#define MOTA_PIN 4
#define MOTB_PIN 2
#define MPWM_PIN 3

void initMotors(){
  pinMode(MOTA_PIN, OUTPUT);
  pinMode(MOTB_PIN, OUTPUT);
  pinMode(MPWM_PIN, OUTPUT);

  digitalWrite(MOTA_PIN, 1);
  digitalWrite(MOTB_PIN, 1);
  digitalWrite(MPWM_PIN, 1);
}

void setMotors(int vel){
  vel = constrain(vel, -1000, 1000);
  digitalWrite(MOTA_PIN, vel >= 0);
  digitalWrite(MOTB_PIN, vel <= 0);
  unsigned char duty = map(abs(vel), 0, 1000, 0, 255);
  if(duty == 0) duty = 255;
  analogWrite(MPWM_PIN, duty);
}

