int botao = 13;
int led = 12;
int led2 = 11;

void setup(){
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int leitura = digitalRead(botao);
  if(leitura == HIGH){
    Serial.println("apertado");
    digitalWrite(led2, HIGH);
    digitalWrite(led, LOW);
    delay(200);
  }else{
    delay(100);
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
    Serial.println("nao");
  }
  //Serial.println(leitura);
  
}
