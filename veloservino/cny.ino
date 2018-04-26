const int cnyPins[] = {A0, A1, A2, A3, A7, A8, A9};

int maxV[7], minV[7], cnyReads[7];

void initCNY(){
  for(int i = 0; i < 7; i++){
    maxV[i] = 0;
    minV[i] = 1023;
    pinMode(cnyPins[i], INPUT);
  }
}

void readCNY(){
  for(int i = 0; i < 7; i++) cnyReads[i] = map(analogRead(cnyPins[i]), minV[i], maxV[i], 0, 1000);
}

