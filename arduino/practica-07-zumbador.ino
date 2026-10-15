// Practica 07: Zumbador pasivo en pin 8
const int BUZZER=8;
void setup(){}
void loop(){ tone(BUZZER, 440); delay(500); tone(BUZZER, 660); delay(500); noTone(BUZZER); delay(500); }
