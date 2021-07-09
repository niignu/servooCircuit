#include <Servo.h>
#define SERVOS 5

Servo myservo[SERVOS];
int servo_pins[SERVOS] = {3,5,6,9,10};
int potpins[SERVOS] = {A1,A2,A3,A4,A5}; 
int potpin_val[SERVOS]; 

void setup(){
 for(int angle = 90; angle < 180; angle += 1) {
 myservo[angle].attach(servo_pins[angle]);
 delay(500); 
}}
void loop(){

 for(int angle = 90; angle < 180; angle += 1) {
    potpin_val[angle] = analogRead(potpins[angle]); 
    potpin_val[angle] = map(potpin_val[angle], 0, 1023, 0, 180);
    myservo[angle].write(potpin_val[angle]);  
    delay(15);  
 }
 for(int angle = 180; angle >= 1; angle -= 1)
 {
    potpin_val[angle] = analogRead(potpins[angle]); 
    potpin_val[angle] = map(potpin_val[angle], 0, 1023, 0, 180);
    myservo[angle].write(potpin_val[angle]);  
    delay(15);  
  }
 }
 
