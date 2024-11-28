# Controle de LEDs RGB com Botões

Este projeto usa um o Arduino para controlar LEDs RGB com base no pressionamento de botões. Cada botão ativa um padrão de cores específico para os LEDs RGB, e os LEDs permanecem apagados quando nenhum botão está pressionado.

---

## 🛠️ Funcionalidades

1. **Controle de LEDs RGB:** 
   - Quatro LEDs RGB são controlados.
   - Cada LED pode ser ajustado para cores diferentes ao ativar os pinos correspondentes (vermelho, verde, azul).

2. **Interação por Botões:** 
   - Seis botões independentes (A0 a A5) definem diferentes padrões de cores para os LEDs.
   - Um botão pode ativar combinações específicas de cores, como amarelo, ciano, magenta, etc.

3. **Modo Padrão:**
   - Quando nenhum botão está pressionado, os LEDs permanecem apagados.

---

## 💻 Estrutura do Código

### 1. **Definição dos Pinos**
Os LEDs e os botões são associados a pinos específicos no Arduino:
- **LEDs RGB:**
  - Cada LED RGB é composto por três pinos: vermelho (R), verde (G), azul (B).
  - Exemplo: 
    - `ledRGB1_R` controla o vermelho do LED 1.
    - `ledRGB4_B` controla o azul do LED 4.

- **Botões:** 
  - Os pinos analógicos A0 a A5 detectam o estado (pressionado ou não) de cada botão.

### 2. **Função `setup()`**
Configura os pinos como entrada (`INPUT`) ou saída (`OUTPUT`):
- **Saídas:** Os pinos dos LEDs são configurados como `OUTPUT`.
- **Entradas:** Os pinos dos botões são configurados como `INPUT`.

### 3. **Função `loop()`**
Executa continuamente:
- Lê o estado dos botões.
- Chama a função `acenderPadrao()` para acender os LEDs em um padrão específico.
- Se nenhum botão estiver pressionado, a função `EstadoPadraoLeds()` é chamada para apagar todos os LEDs.

### 4. **Função `acenderPadrao`**
Controla os padrões de cor para os LEDs RGB:
- Recebe o número do padrão (1 a 6) como argumento.
- Usa `digitalWrite` para acender ou apagar cada cor (vermelho, verde, azul).
- Exemplo de cores:
  - **Padrão 1:** Todos os LEDs na cor amarela.
  - **Padrão 3:** Todos os LEDs na cor magenta.

### 5. **Função `EstadoPadraoLeds()`**
Garante que todos os LEDs estejam apagados quando nenhum botão for pressionado.

---

## 🖱️ Como Usar

1. **Conexões de Hardware:**
   - Conecte os LEDs RGB nos pinos 2 a 13.
   - Conecte os botões nos pinos analógicos A0 a A5.
   - Adicione resistores de pull-down aos botões para evitar leituras flutuantes.

2. **Subir o Código no Arduino:**
   - Use a IDE do Arduino para compilar e fazer o upload do código.

3. **Testar:**
   - Pressione os botões para ativar diferentes padrões de cores nos LEDs RGB.

---

## 🛠️ Componentes Necessários

1. **Microcontrolador:** Arduino Uno ou similar.
2. **LEDs RGB:** 4 LEDs RGB de cátodo comum.
3. **Botões:** 6 botões.
4. **Resistores:** 300 Ω para LEDs e 1 kΩ para os botões.

---
## 📚 Referências
- [Simulador no TinkerCad](https://www.tinkercad.com/things/3HIHWPXdBLA-amarelando)
- [Documentação Oficial Arduino](https://www.arduino.cc/en/Guide)
