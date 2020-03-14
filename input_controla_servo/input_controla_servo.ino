#include <Servo.h>

int ledMwl = 11;
int pot = A0;

Servo meuServo;

void setup() {
  meuServo.attach(9);

  Serial.begin(9600);
 
  pinMode(ledMwl, OUTPUT);
}

void loop() {

  if (Serial.available() > 0) {

    // mandar angulo (int)
    String angulo = Serial.readStringUntil(';');
    Serial.println(angulo);

    meuServo.write(angulo.toInt());

    delay(100);
  }
}
