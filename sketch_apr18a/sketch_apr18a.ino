
#include "UnoJoy.h"

// set pin แต่ละปุ่ม
int r1Pin = 7;
int r2Pin = 6;
int selectPin = 13;

int TrianglePin = 9;
int SquarePin = 11;
int CrossPin = 10;
int CirclePin = 8;

int LeftPin = 2;
int UpPin = 5;
int RightPin = 4;
int DownPin = 3;

int StartPin =  12;

void setup(){
  setupPins();
  setupUnoJoy();
}

void loop(){
  // สำหรับรับข้อมูลใหม่เรื่อยๆ
  dataForController_t controllerData = getControllerData();
  setControllerData(controllerData);
}

void setupPins(void){
  // set pin ทุกตัวที่ต้องใช้
  for (int i = 2; i <= 13; i++){
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }
}

dataForController_t getControllerData(void){
  
  // set ค่าเริ่มต้นสำหรับรับค่า
  dataForController_t controllerData = getBlankDataForController();
  // ค่าเริ่มต้นของปุ่มเมื่อไม่ได้กดจะมีค่า เป็น HIGH ดังนั้นเราต้องกลับค่าที่เมื่อกด จาก LOW เป็น HIGH
  controllerData.selectOn = !digitalRead(selectPin);
  controllerData.l2On = !digitalRead(r2Pin);
  controllerData.r2On = !digitalRead(r1Pin);
  controllerData.triangleOn = !digitalRead(TrianglePin);
  controllerData.circleOn = !digitalRead(CirclePin);
  controllerData.squareOn = !digitalRead(SquarePin);
  controllerData.crossOn = !digitalRead(CrossPin);
  controllerData.dpadUpOn = !digitalRead(UpPin);
  controllerData.dpadDownOn = !digitalRead(DownPin);
  controllerData.dpadLeftOn = !digitalRead(LeftPin);
  controllerData.dpadRightOn = !digitalRead(RightPin);
  
  controllerData.startOn = !digitalRead(StartPin);
  
  // return ข้อมูลทั้งหมด
  return controllerData;
}
