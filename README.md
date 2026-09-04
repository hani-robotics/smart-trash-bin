# smart-trash-bin
An automated smart trash bin using Arduino Uno, HC-SR04 Ultrasonic Sensor & Servo motor

## Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor(SG90 or similar)

## Hardware Connections 

| Component | Arduino Pin |
|-----------|-------------|
| HC-SR04 Trig Pin | 11 |
| HC-SR04 ECHO Pin | 10 |
| Servo Signal Pin | 6 |

## How It Works 

 The HC-SR04 utrasonic sensor continuouslymeasures the distance to nearby objects using the Trig and Echo pins. When an object (such as a hand) is detected within 10 cm, the servo motor rotates to open the trash bin lid.After a short delay, the lid closed automatically.  

##Demo Video

[Watch the demo on LinkedIn](linkedin.com/in/hani-saïdi-894b5404)
