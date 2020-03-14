#include <Servo.h>

int ledMwl = 11;
int pot = A0;

Servo meuServo;

void setup(){
  meuServo.attach(9);
  
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(ledMwl, OUTPUT);
}

void loop() {
  long leitura = analogRead(pot);

  long pwm = map(leitura, 0, 1023, 0, 255);
  long angulo = map(leitura, 0, 1023, 0, 180);

  Serial.print(angulo);
 
  analogWrite(ledMwl, pwm);
  meuServo.write(angulo);

  delay(100);
}
