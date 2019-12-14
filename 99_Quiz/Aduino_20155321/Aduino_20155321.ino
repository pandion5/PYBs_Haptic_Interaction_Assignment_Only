int sensorPosPin = A2; // input pin for MR sensor
int rawPos;
float t;
int flag;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//9600
  pinMode(sensorPosPin, INPUT); // set MR sensor pin to be an input
  t = 0;
  flag = 0;
}

void loop() {
  if(Serial.available() > 0)
  {
    flag = Serial.read();
  }
    if(flag == '1')
      calculatePosition();
    else if(flag == '2')
      calculateVirtualPosition();
  
  Serial.println(rawPos);
  delay(10);
}


void calculatePosition()
{
  rawPos = analogRead(sensorPosPin);
}

void calculateVirtualPosition()
{
  t = t+1;
  rawPos = 512 + 512.0 * sin(0.1 * t);
}

