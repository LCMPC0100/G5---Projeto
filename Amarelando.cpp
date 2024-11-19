// Definir os pinos dos LEDs RGB
const int ledRGB1_R = 3;   // vermelho 
const int ledRGB1_G = 5;   // verde
const int ledRGB1_B = 6;   // azul

const int ledRGB2_R = 9;   // vermelho 
const int ledRGB2_G = 10;  // verde 
const int ledRGB2_B = 11;  // azul 

const int ledRGB3_R = 13;  // vermelho 
const int ledRGB3_G = 12;  // verde 
const int ledRGB3_B = 8;   // azul 

const int ledRGB4_R = A0;  // vermelho
const int ledRGB4_G = A1;  // verde
const int ledRGB4_B = A2;  //azul

// Definir os pinos dos botões
const int button1Pin = 2; 
const int button2Pin = 4; 
const int button3Pin = 7;  
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

  // Definir os pinos dos botões como entrada com resistores de pull-up
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
  pinMode(button5Pin, INPUT);
  pinMode(button6Pin, INPUT);
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
    case 4:
	  // Cor dos LEDS(Roxo)
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
      break;
    case 5:
	  // Cor dos LEDS(Laranja)
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
    case 6:
    // Cor dos LEDS(Azul)
      analogWrite(ledRGB1_R, 0);
      analogWrite(ledRGB1_G, 191);
      analogWrite(ledRGB1_B, 255);

      analogWrite(ledRGB2_R, 0);
      analogWrite(ledRGB2_G, 191);
      analogWrite(ledRGB2_B, 255);  

      analogWrite(ledRGB3_R, 0);
      analogWrite(ledRGB3_G, 191);
      analogWrite(ledRGB3_B, 255);

      analogWrite(ledRGB4_R, 0);
      analogWrite(ledRGB4_G, 191);
      analogWrite(ledRGB4_B, 255);
      break;
  }
}

// Função para apagar todos os LEDs
void EstadoPadraoLeds() {
  // Apagar LED 1
  analogWrite(ledRGB1_R, 255);
  analogWrite(ledRGB1_G, 255);
  analogWrite(ledRGB1_B, 255);

  // Apagar LED 2
  analogWrite(ledRGB2_R, 255);
  analogWrite(ledRGB2_G, 255);
  analogWrite(ledRGB2_B, 255);

  // Apagar LED 3
  analogWrite(ledRGB3_R, 255);
  analogWrite(ledRGB3_G, 255);
  analogWrite(ledRGB3_B, 255);

  // Apagar LED 4
  analogWrite(ledRGB4_R, 255);
  analogWrite(ledRGB4_G, 255);
  analogWrite(ledRGB4_B, 255);
}
