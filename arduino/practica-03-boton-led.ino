// Practica 03: Boton controla LED (boton entre pin 2 y GND)
const int BOTON = 2, LED = 13;
void setup() { pinMode(BOTON, INPUT_PULLUP); pinMode(LED, OUTPUT); }
void loop() { digitalWrite(LED, digitalRead(BOTON) == LOW ? HIGH : LOW); }
