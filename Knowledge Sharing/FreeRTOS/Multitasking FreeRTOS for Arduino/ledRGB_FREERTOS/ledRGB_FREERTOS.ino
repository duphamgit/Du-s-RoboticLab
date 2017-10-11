#include <Arduino_FreeRTOS.h>

//led 1
int redPin_1 = 2;
int bluePin_1 = 3;
int greenPin_1 = 4;
//led 2
int redPin_2 = 5;
int bluePin_2 = 6;
int greenPin_2 = 7;
//led 3
int redPin_3 = 8;
int bluePin_3 = 9;
int greenPin_3 = 10;

void Task1( void *pvParameters );
void Task2( void *pvParameters );
void Task3( void *pvParameters );

void setup() {
  // put your setup code here, to run once:
  //led 1
  pinMode(redPin_1, OUTPUT);
  pinMode(bluePin_1, OUTPUT);
  pinMode(greenPin_1, OUTPUT);
  //led 2
  pinMode(redPin_2, OUTPUT);
  pinMode(bluePin_2, OUTPUT);
  pinMode(greenPin_2, OUTPUT);
  //led 3
  pinMode(redPin_3, OUTPUT);
  pinMode(bluePin_3, OUTPUT);
  pinMode(greenPin_3, OUTPUT);

  //create task
  xTaskCreate(
    Task1
    , (const portCHAR *)"Task1"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task2
    , (const portCHAR *)"Task2"
    , 128
    , NULL
    , 1
    , NULL );

  xTaskCreate(
    Task3
    , (const portCHAR *)"Task3"
    , 128
    , NULL
    , 1
    , NULL );
}
void loop() {
  // put your main code here, to run repeatedly:
}
//Task for leg 1: servo 2, servo 3, servo 4
void Task1(void *pvParamaters) {
  (void) pvParamaters;
  //loop here
  for (;;) {
    setColor_led1();
    delay(5000);
  }
}

void Task2(void *pvParamaters) {
  (void) pvParamaters;
  //loop here
  for (;;) {
    setColor_led2();
    delay(5000);
  }
}

void Task3(void *pvParamaters) {
  (void) pvParamaters;
  //loop here
  for (;;) {
    setColor_led3();
    delay(5000);
  }
}
void setColor_led1() {
  digitalWrite(redPin_1, HIGH);
  digitalWrite(bluePin_1, HIGH);
  digitalWrite(greenPin_1, LOW);
  delay(2000);
  digitalWrite(redPin_1, LOW);
  digitalWrite(bluePin_1, LOW);
  digitalWrite(greenPin_1, LOW);
}
void setColor_led2() {
  digitalWrite(redPin_2, HIGH);
  digitalWrite(bluePin_2, HIGH);
  digitalWrite(greenPin_2, LOW);
  delay(2000);
  digitalWrite(redPin_2, LOW);
  digitalWrite(bluePin_2, LOW);
  digitalWrite(greenPin_2, LOW);
}
void setColor_led3() {
  digitalWrite(redPin_3, HIGH);
  digitalWrite(bluePin_3, HIGH);
  digitalWrite(greenPin_3, LOW);
  delay(2000);
  digitalWrite(redPin_3, LOW);
  digitalWrite(bluePin_3, LOW);
  digitalWrite(greenPin_3, LOW);
}


