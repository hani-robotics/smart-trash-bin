#include<Servo.h>

Servo servo;
float time;
float speed;
float distance;

void setup(){
    pinMode(11,OUTPUT);
    pinMode(10,INPUT);
    servo.attach(6);
    Serial.begin(9600);
    speed=0.034;
}

void loop(){
    digitalWrite(11,LOW);
    delayMicroseconds(2);
    digitalWrite(11,HIGH);
    delayMicroseconds(10);
    digitalWrite(11,LOW);

    time=pulseIn(10,HIGH);
distance=time*speed/2;

Serial.print("distance=");
Serial.print(distance);
Serial.println("cm");

if(distance<10){
    servo.write(160);
    delay(1000);
    servo.write(30);
}

}