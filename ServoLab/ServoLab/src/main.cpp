#include <Arduino.h>
#include <Servo.h>

static const int servosPins = 19;

Servo servos;

void setServos(int degrees) {
    servos.write((degrees) % 180);
}

void setup() {
    Serial.begin(115200);

    for(int i = 0; i < 5; ++i) {
        if(!servos.attach(servosPins)) {
            Serial.print("Servo ");
            Serial.print(i);
            Serial.println("attach error");
        }
    }
}

void loop() {
/*     for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
        setServos(posDegrees);
        Serial.println(posDegrees);
        delay(5);
    } */
    setServos(90);
    Serial.println(90);
    delay(1000);


/*     for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
        setServos(posDegrees);
        Serial.println(posDegrees);
        delay(5);
    } */
}