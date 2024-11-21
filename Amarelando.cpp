// Definir os pinos dos LEDs RGB
const int ledRGB1_R = 2;   // vermelho 
const int ledRGB1_B = 3;   // azul
const int ledRGB1_G = 4;   // verde

const int ledRGB2_R = 5;   // vermelho 
const int ledRGB2_B = 6;   // azul 
const int ledRGB2_G = 7;   // verde 

const int ledRGB3_R = 8;   // vermelho 
const int ledRGB3_B = 9;   // azul 
const int ledRGB3_G = 10;  // verde 

const int ledRGB4_R = 11;  // vermelho
const int ledRGB4_B = 12;  // azul
const int ledRGB4_G = 13;  // verde

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
    acenderLed(1);  // Acender 1 padrão
    delay(500);
  } else if (digitalRead(button2Pin) == HIGH) {
    acenderLed(2);  // Acender 2 padrão
    delay(500);
  } else if (digitalRead(button3Pin) == HIGH) {
    acenderLed(3);  // Acender 3 padrão
    delay(500);
  } else if (digitalRead(button4Pin) == HIGH){
    acenderLed(4);  // Acender 4 padrão
    delay(500);
  } else if (digitalRead(button5Pin) == HIGH){
    acenderLed(5);  // Acender 5 padrão
    delay(500);
  } else if (digitalRead(button6Pin) == HIGH){
    acenderLed(6);  // Acender 6 padrão
    delay(500);
  }else{
    EstadoPadraoLeds();
  } 
}

// Função para acender o LED 
void acenderLed(int ledNumero) {
  switch (ledNumero) {
    case 1:
    Serial.println(ledNumero);
      // Cor dos LEDS(Vermelho)
      analogWrite(ledRGB1_R, 255);
      analogWrite(ledRGB1_G, 0);
      analogWrite(ledRGB1_B, 0);

      analogWrite(ledRGB2_R, 255);
      analogWrite(ledRGB2_G, 0);
      analogWrite(ledRGB2_B, 0);

      analogWrite(ledRGB3_R, 255);
      analogWrite(ledRGB3_G, 0);
      analogWrite(ledRGB3_B, 0);

      analogWrite(ledRGB4_R, 255);
      analogWrite(ledRGB4_G, 0);
      analogWrite(ledRGB4_B, 0);
      break;
    case 2:
    // Cor dos LEDS(Verde)
    Serial.println(ledNumero);
      analogWrite(ledRGB1_R, 0);
      analogWrite(ledRGB1_G, 255);
      analogWrite(ledRGB1_B, 0);

      analogWrite(ledRGB2_R, 0);
      analogWrite(ledRGB2_G, 255);
      analogWrite(ledRGB2_B, 0);

      analogWrite(ledRGB3_R, 0);
      analogWrite(ledRGB3_G, 255);
      analogWrite(ledRGB3_B, 0);

      analogWrite(ledRGB4_R, 0);
      analogWrite(ledRGB4_G, 255);
      analogWrite(ledRGB4_B, 0);
      break;
    case 3:
	  // Cor dos LEDS(Amarelo)
    Serial.println(ledNumero);
      analogWrite(ledRGB1_R, 255);
      analogWrite(ledRGB1_G, 255);
      analogWrite(ledRGB1_B, 0);

      analogWrite(ledRGB2_R, 255);
      analogWrite(ledRGB2_G, 255);
      analogWrite(ledRGB2_B, 0);

      analogWrite(ledRGB3_R, 255);
      analogWrite(ledRGB3_G, 255);
      analogWrite(ledRGB3_B, 0);

      analogWrite(ledRGB4_R, 255);
      analogWrite(ledRGB4_G, 255);
      analogWrite(ledRGB4_B, 0);
      break;
    /*case 4:
	  // Cor dos LEDS(Roxo)
    Serial.println(ledNumero);
      analogWrite(ledRGB1_R, 148);
      analogWrite(ledRGB1_G, 0);
      analogWrite(ledRGB1_B, 211);

      analogWrite(ledRGB2_R, 148);
      analogWrite(ledRGB2_G, 0);
      analogWrite(ledRGB2_B, 211);

      analogWrite(ledRGB3_R, 148);
      analogWrite(ledRGB3_G, 0);
      analogWrite(ledRGB3_B, 211);

      analogWrite(ledRGB4_R, 148);
      analogWrite(ledRGB4_G, 0);
      analogWrite(ledRGB4_B, 211);
      break;*/
    case 5:
	  // Cor dos LEDS(Laranja)
    Serial.println(ledNumero);
      analogWrite(ledRGB1_R, 255);
      analogWrite(ledRGB1_G, 165);
      analogWrite(ledRGB1_B, 0);

      analogWrite(ledRGB2_R, 255);
      analogWrite(ledRGB2_G, 165);
      analogWrite(ledRGB2_B, 0);

      analogWrite(ledRGB3_R, 255);
      analogWrite(ledRGB3_G, 165);
      analogWrite(ledRGB3_B, 0);

      analogWrite(ledRGB4_R, 255);
      analogWrite(ledRGB4_G, 165);
      analogWrite(ledRGB4_B, 0);
      break;
    case 4:
    Serial.println(ledNumero);
    // Cor dos LEDS(Azul)
      analogWrite(ledRGB1_R, 0);
      analogWrite(ledRGB1_G, 0);
      analogWrite(ledRGB1_B, 255);

      analogWrite(ledRGB2_R, 0);
      analogWrite(ledRGB2_G, 0);
      analogWrite(ledRGB2_B, 255);  

      analogWrite(ledRGB3_R, 0);
      analogWrite(ledRGB3_G, 0);
      analogWrite(ledRGB3_B, 255);

      analogWrite(ledRGB4_R, 0);
      analogWrite(ledRGB4_G, 0);
      analogWrite(ledRGB4_B, 255);
      break;
  }
}

// Função para apagar todos os LEDs
void EstadoPadraoLeds() {
  // Apagar LED 1
  analogWrite(ledRGB1_R, 0);
  analogWrite(ledRGB1_G, 0);
  analogWrite(ledRGB1_B, 0);

  // Apagar LED 2
  analogWrite(ledRGB2_R, 0);
  analogWrite(ledRGB2_G, 0);
  analogWrite(ledRGB2_B, 0);

  // Apagar LED 3
  analogWrite(ledRGB3_R, 0);
  analogWrite(ledRGB3_G, 0);
  analogWrite(ledRGB3_B, 0);

  // Apagar LED 4
  analogWrite(ledRGB4_R, 0);
  analogWrite(ledRGB4_G, 0);
  analogWrite(ledRGB4_B, 0);
}
