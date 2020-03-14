void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  if(Serial.available() > 0){
    int leitura = Serial.read();
    
    Serial.println(leitura);  // enter = 10
    
    if(leitura == 'H'){
      digitalWrite(11, 1);  
      Serial.println("ligou");
    }else if(leitura == 'L'){
      digitalWrite(11, 0);
      Serial.println("desligou");
    }
  }
}
