const double Kp = 1.0;
const double Kd = 0.0;
const double Ki = 0.0;

#define setpoint 400.0
#define minvel 400

double lastError = 0;
double integral = 0;
int pid = 0;
int vel = 0;

int calculatePID(){
  unsigned long wm1, wm2;
  for(int i = 0; i < 7; i++){
    int r = cnyReads[i];
    wm1 += (i + 1) * r;
    wm2 += r;
  }
  double error = setpoint - 100 * wm1 / wm2;
  integral += error;
  double p = error * Kp;
  double i = integral * Ki;
  double d = (lastError - error) * Kd;
  lastError = error;
  pid = int(p + i + d);
  vel = minvel + (1000 - minvel) * 100 / (abs(error) + 100);
  setMotors(vel);
}

void usePID(){
  readCNY();
  int a = calculatePID();
  
}

