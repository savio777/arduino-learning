int primeiraPortaLed = 11;
int ultimaPortaLed = 13;

//int listaLeds[] = {11, 12, 13};

void setup(){
   Serial.begin(9600);
  
  for(int i = primeiraPortaLed; i <= ultimaPortaLed; i++){
    pinMode(i, OUTPUT);
    //Serial.println(listaLeds[i]);
  }
}

void loop(){
  //Serial.println('sequencia normal');
  for(int i = primeiraPortaLed; i <= ultimaPortaLed; i++){
    digitalWrite(i, HIGH);    
    delay(700);
    //digitalWrite(i, LOW);
  }

//  Serial.println('sequencia ao contrario');
  for(int i = ultimaPortaLed; i >= primeiraPortaLed; i--){
    //digitalWrite(i, HIGH);    
    delay(700);
    digitalWrite(i, LOW);
  }

  delay(700);
}
