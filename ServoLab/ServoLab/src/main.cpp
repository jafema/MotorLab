#include <Arduino.h>
#include <Servo.h>

static const int servosPins = 19;

Servo servos;

void setServos(int degrees) {
    servos.write((degrees) % 180);
}

void setup() {
    Serial.begin(115200);
    if(!servos.attach(servosPins)) {
        Serial.print("Servo attach error.");
    }    
}

void loop() {
    for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
        setServos(posDegrees);
        Serial.println(posDegrees);
        delay(5);
    }
    delay(500);
    setServos(90);
    Serial.println(90);
    delay(1000);


/*     for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        setServos(posDegrees);
        Serial.println(posDegrees);
        delay(5);
    } */
}