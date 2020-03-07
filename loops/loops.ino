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
  for(int i = primeiraPortaLed; i <= ultimaPortaLed; i++){
    digitalWrite(i, HIGH);    
    delay(300);
    digitalWrite(i, LOW);
  }
}
