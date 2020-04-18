
#include "UnoJoy.h"

// Define our pins
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
  // Always be getting fresh data
  dataForController_t controllerData = getControllerData();
  setControllerData(controllerData);
}

void setupPins(void){
  // Set all the digital pins as inputs
  // with the pull-up enabled, except for the 
  // two serial line pins
  for (int i = 2; i <= 13; i++){
    pinMode(i, INPUT);
    digitalWrite(i, HIGH);
  }
}

dataForController_t getControllerData(void){
  
  // Set up a place for our controller data
  //  Use the getBlankDataForController() function, since
  //  just declaring a fresh dataForController_t tends
  //  to get you one filled with junk from other, random
  //  values that were in those memory locations before
  dataForController_t controllerData = getBlankDataForController();
  // Since our buttons are all held high and
  //  pulled low when pressed, we use the "!"
  //  operator to invert the readings from the pins
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
  
  // And return the data!
  return controllerData;
}
