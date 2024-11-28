// Definir os pinos dos LEDs RGB
const int ledRGB1_R = 2;   // vermelho 
const int ledRGB1_G = 3;   // azul
const int ledRGB1_B = 4;   // verde

const int ledRGB2_R = 5;   // vermelho 
const int ledRGB2_G = 6;   // azul 
const int ledRGB2_B = 7;   // verde 

const int ledRGB3_R = 8;   // vermelho 
const int ledRGB3_G = 9;   // azul 
const int ledRGB3_B = 10;  // verde 

const int ledRGB4_R = 11;  // vermelho
const int ledRGB4_G = 12;  // azul
const int ledRGB4_B = 13;  // verde

// Definir os pinos dos botões
const int button1Pin = A0; 
const int button2Pin = A1; 
const int button3Pin = A2;  
const int button4Pin = A3; 
const int button5Pin = A4;
const int button6Pin = A5;

void setup() {
  // Definir os pinos dos LEDs RGB como saída
  pinMode(ledRGB1_R, OUTPUT);
  pinMode(ledRGB1_G, OUTPUT);
  pinMode(ledRGB1_B, OUTPUT);
  
  pinMode(ledRGB2_R, OUTPUT);
  pinMode(ledRGB2_G, OUTPUT);
  pinMode(ledRGB2_B, OUTPUT);

  pinMode(ledRGB3_R, OUTPUT);
  pinMode(ledRGB3_G, OUTPUT);
  pinMode(ledRGB3_B, OUTPUT);

  pinMode(ledRGB4_R, OUTPUT);
  pinMode(ledRGB4_G, OUTPUT);
  pinMode(ledRGB4_B, OUTPUT);

  // Definir os pinos dos botões como entrada com resistores
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  pinMode(button5Pin, INPUT);
  pinMode(button6Pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Verificando qual botão está sendo apertado
  if (digitalRead(button1Pin) == HIGH) {
    acenderPadrao(1);  // Acender 1 padrão
    delay(500);
  } else if (digitalRead(button2Pin) == HIGH) {
    acenderPadrao(2);  // Acender 2 padrão
    delay(500);
  } else if (digitalRead(button3Pin) == HIGH) {
    acenderPadrao(3);  // Acender 3 padrão
    delay(500);
  } else if (digitalRead(button4Pin) == HIGH){
    acenderPadrao(4);  // Acender 4 padrão
    delay(500);
  } else if (digitalRead(button5Pin) == HIGH){
    acenderPadrao(5);  // Acender 5 padrão
    delay(500);
  } else if (digitalRead(button6Pin) == HIGH){
    acenderPadrao(6);  // Acender 6 padrão
    delay(500);
  }else{
    EstadoPadraoLeds();
  } 
}

// Função para acender o LED 
void acenderPadrao(int numPadrao) {
  switch (numPadrao) {
    case 1:
    Serial.println(numPadrao);
      // Cor dos LEDS(Amarelo)
      digitalWrite(ledRGB1_R, HIGH);
      digitalWrite(ledRGB1_G, HIGH);
      digitalWrite(ledRGB1_B, LOW);

      digitalWrite(ledRGB2_R, HIGH);
      digitalWrite(ledRGB2_G, HIGH);
      digitalWrite(ledRGB2_B, LOW);

      digitalWrite(ledRGB3_R, HIGH);
      digitalWrite(ledRGB3_G, HIGH);
      digitalWrite(ledRGB3_B, LOW);

      digitalWrite(ledRGB4_R, HIGH);
      digitalWrite(ledRGB4_G, HIGH);
      digitalWrite(ledRGB4_B, LOW);
      break;
    case 2:
    Serial.println(numPadrao);
      // Cor dos LEDS(Vermelho e verde)
      digitalWrite(ledRGB1_R, LOW);
      digitalWrite(ledRGB1_G, HIGH);
      digitalWrite(ledRGB1_B, LOW);

      digitalWrite(ledRGB2_R, LOW);
      digitalWrite(ledRGB2_G, HIGH);
      digitalWrite(ledRGB2_B, LOW);

      digitalWrite(ledRGB3_R, HIGH);
      digitalWrite(ledRGB3_G, LOW);
      digitalWrite(ledRGB3_B, LOW);

      digitalWrite(ledRGB4_R, HIGH);
      digitalWrite(ledRGB4_G, LOW);
      digitalWrite(ledRGB4_B, LOW);
      break;
    case 3:
    Serial.println(padraoNumero);
      // Cor dos LEDS(Magenta)
      digitalWrite(ledRGB1_R, HIGH);
      digitalWrite(ledRGB1_G, LOW);
      digitalWrite(ledRGB1_B, HIGH);

      digitalWrite(ledRGB2_R, HIGH);
      digitalWrite(ledRGB2_G, LOW);
      digitalWrite(ledRGB2_B, HIGH);

      digitalWrite(ledRGB3_R, HIGH);
      digitalWrite(ledRGB3_G, LOW);
      digitalWrite(ledRGB3_B, HIGH);

      digitalWrite(ledRGB4_R, HIGH);
      digitalWrite(ledRGB4_G, LOW);
      digitalWrite(ledRGB4_B, HIGH);
      break;
    case 4:
    Serial.println(numPadrao);
      // Cor dos LEDS(Amarelo e verde)
      digitalWrite(ledRGB1_R, HIGH);
      digitalWrite(ledRGB1_G, HIGH);
      digitalWrite(ledRGB1_B, LOW);

      digitalWrite(ledRGB2_R, HIGH);
      digitalWrite(ledRGB2_G, HIGH);
      digitalWrite(ledRGB2_B, LOW);

      digitalWrite(ledRGB3_R, LOW);
      digitalWrite(ledRGB3_G, HIGH);
      digitalWrite(ledRGB3_B, LOW);

      digitalWrite(ledRGB4_R, LOW);
      digitalWrite(ledRGB4_G, HIGH);
      digitalWrite(ledRGB4_B, LOW);
      break;
    case 5:
	  // Cor dos LEDS(Vermelho)
    Serial.println(numPadrao);
      digitalWrite(ledRGB1_R, HIGH);
      digitalWrite(ledRGB1_G, LOW);
      digitalWrite(ledRGB1_B, LOW);

      digitalWrite(ledRGB2_R, HIGH);
      digitalWrite(ledRGB2_G, LOW);
      digitalWrite(ledRGB2_B, LOW);

      digitalWrite(ledRGB3_R, HIGH);
      digitalWrite(ledRGB3_G, LOW);
      digitalWrite(ledRGB3_B, LOW);

      digitalWrite(ledRGB4_R, HIGH);
      digitalWrite(ledRGB4_G, LOW);
      digitalWrite(ledRGB4_B, LOW);
      break;
    case 6:
    Serial.println(numPadrao);
      // Cor dos LEDS(Ciano)
      digitalWrite(ledRGB1_R, LOW);
      digitalWrite(ledRGB1_G, HIGH);
      digitalWrite(ledRGB1_B, HIGH);

      digitalWrite(ledRGB2_R, LOW);
      digitalWrite(ledRGB2_G, HIGH);
      digitalWrite(ledRGB2_B, HIGH);

      digitalWrite(ledRGB3_R, LOW);
      digitalWrite(ledRGB3_G, HIGH);
      digitalWrite(ledRGB3_B, HIGH);

      digitalWrite(ledRGB4_R, LOW);
      digitalWrite(ledRGB4_G, HIGH);
      digitalWrite(ledRGB4_B, HIGH);
      break;
  }
}

void EstadoPadraoLeds() {
  // Estado padrão dos Leds são todos apagados
  // Apagar LED 1
  digitalWrite(ledRGB1_R, LOW);
  digitalWrite(ledRGB1_G, LOW);
  digitalWrite(ledRGB1_B, LOW);

  // Apagar LED 2
  digitalWrite(ledRGB2_R, LOW);
  digitalWrite(ledRGB2_G, LOW);
  digitalWrite(ledRGB2_B, LOW);

  // Apagar LED 3
  digitalWrite(ledRGB3_R, LOW);
  digitalWrite(ledRGB3_G, LOW);
  digitalWrite(ledRGB3_B, LOW);

  // Apagar LED 4
  digitalWrite(ledRGB4_R, LOW);
  digitalWrite(ledRGB4_G, LOW);
  digitalWrite(ledRGB4_B, LOW);
}
