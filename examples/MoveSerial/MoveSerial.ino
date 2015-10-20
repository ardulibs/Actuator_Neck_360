#include <Servo.h>
#include <RobotNeck360.h>

int servo_pin = 6;

RobotNeck360 neck;

void setup() {
  Serial.begin(9600);
  neck.attach(servo_pin);
  
  Serial.println("1. Rotate clockwise");
  Serial.println("2. Rotate counterclockwise");
  Serial.println("3. Stop");
  Serial.println("Select option: ");
}

void loop() {
    int order = getOrder();
    executeOrder(order);    
}

int getOrder() {   
  int order = 0;
  //We received the order.
  if (Serial.available() > 0) {
    order = Serial.parseInt();
  }
  
  return order;
}

void executeOrder(int order) {
    //We execute the order.
    switch(order){
      case 0:
        //It has not received anything.
        break;
      case 1:
        Serial.println("Rotate clockwise");
        neck.rotateClockwise();
        break;
      case 2:
        Serial.println("Rotate counterclockwise");
        neck.rotateCounterclockwise();
        break;
      case 3:
        Serial.println("Stop");
        neck.center();
        break;
      default:
        Serial.println("Unknown order");
     }
}