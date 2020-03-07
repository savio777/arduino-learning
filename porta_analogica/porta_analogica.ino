int ledMwl = 11;

void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(ledMwl, OUTPUT);
}

void loop(){
  int valorVolt = analogRead(A0);

  // testado com LDR e potenciometro
  Serial.println(valorVolt);

  // ligando led com o LDR (podia ser o potenciometro)
  for(int pwm = 0; pwm <= 255; pwm++){
    analogWrite(ledMwl, pwm);
    delay(25);
  }

  for(int pwm = 255; pwm >= 0; pwm--){
    analogWrite(ledMwl, pwm);
    delay(25);
  }
}
