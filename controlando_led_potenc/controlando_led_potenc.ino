int ledMwl = 11;
int pot = A0;

void setup(){
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(ledMwl, OUTPUT);
}

void loop() {
  long leitura = analogRead(pot);

//  Serial.println(leitura);

  // regra de 3
  //long x = (leitura * 255) / 1023;

  // lib para calcular regra de 3
  long x = map(leitura, 0, 1023, 0, 255);

  Serial.println(x);
 
  analogWrite(ledMwl, x);

  delay(100);
}
