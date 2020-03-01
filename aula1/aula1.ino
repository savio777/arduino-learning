int ledVermelho = 13;
int ledVerde = 12;
//int botao = 11;
int numberSleep = 0;

void setup(){
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  //pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop(){
  numberSleep = 1000;
  
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(numberSleep);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(numberSleep);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
  //Serial.println(numberSleep);
  
  //numberSleep = 2000;
  delay(numberSleep);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(numberSleep);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(numberSleep);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);
  delay(numberSleep);
  Serial.println(numberSleep);
}

