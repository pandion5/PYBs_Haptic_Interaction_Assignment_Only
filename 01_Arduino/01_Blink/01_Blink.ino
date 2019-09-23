/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() { //최초 실행시 한번만 불리는 함수
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); //빌트인 LED를 출력으로 설정
}

// the loop function runs over and over again forever
void loop() { //작동시 종료 전까지 무한반복하는 함수
  digitalWrite(LED_BUILTIN, HIGH);   // 빌트인 LED 켜기
  delay(1000);                       // 1초 대기
  digitalWrite(LED_BUILTIN, LOW);    // 빌트인 LED 끄기
  delay(1000);                       // 1초 대기
}
