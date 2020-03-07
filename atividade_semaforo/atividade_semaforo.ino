int verde = 13;
int vermelho = 12;
int amarelo = 11;
int botao = 10;

int tempo = 1000;
int tempoPedestre = 2000;

//int escutaLeitura; 

void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop()
{    
  lerBotao();

  digitalWrite(vermelho, 0);
  digitalWrite(verde, 1);

  lerBotao();

  delay(tempo);
  digitalWrite(amarelo, 1);

  lerBotao();

  delay(tempo);
  digitalWrite(amarelo, 0);
  digitalWrite(vermelho, 1);
  digitalWrite(verde, 0);
  delay(tempo);

  lerBotao();
}

void lerBotao(){
  int escutaLeitura = digitalRead(botao);

  if(escutaLeitura == 1)
  {
    Serial.println("apertou");
    digitalWrite(amarelo, 1);
    delay(tempo);
    digitalWrite(amarelo, 0);
    delay(tempo);
    digitalWrite(amarelo, 1);
    delay(tempo);
    digitalWrite(amarelo, 0);
    delay(tempo);

    delay(tempoPedestre);
    digitalWrite(vermelho, 1);
    digitalWrite(amarelo, 0);
    digitalWrite(verde, 0);
    delay(tempoPedestre);
  }
}
