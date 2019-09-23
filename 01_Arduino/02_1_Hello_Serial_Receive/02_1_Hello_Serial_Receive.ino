int cnt;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  cnt = 0;
}

void loop() {
  //Serial.println('a' + cnt); // Serial 모니터에 97+cnt가 찍혀용
  Serial.println(cnt); //Serial 모니터에 cnt가 찍혀용
  delay(1000);           
  cnt = cnt +1;
}
