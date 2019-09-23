void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    // get incoming byte:
    int inByte = Serial.read();

    if(inByte=='0')
      digitalWrite(LED_BUILTIN, LOW);   // Serial 창에 0을 입력하면 LED가 꺼져요
    else if(inByte=='1')
      digitalWrite(LED_BUILTIN, HIGH);  // Serial 창에 1을 입력하면 LED가 켜져요
  }
}
