int cnt1 = 0;
void setup() {
  Serial.begin(9600);
}

// 1초마다 PC로 숫자를 보내는 예제
void loop() {
  char buf[255];
  sprintf(buf, "%d", cnt1); //버퍼에 cnt1저장
  // "%d" 를 "%c" 로 바꾸면 어떻게 될까요?
  // c로 바꾸면 아스키 코드에 해당하는 문자 출력
  Serial.println(buf); // 버퍼에 있는 문자 출력
  cnt1++; //cnt1 증가
  
  delay(1000); // 1초 경과 후 루프
}
