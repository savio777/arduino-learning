void setup(){
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop(){
  int valorVolt = analogRead(A0);

  // testado com LDR e potenciometro
  Serial.println(valorVolt);

  delay(100);
}
