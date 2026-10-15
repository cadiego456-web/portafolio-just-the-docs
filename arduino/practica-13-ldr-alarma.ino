// Practica 13: Alarma sonora cuando baja la luz
const int LDR=A0, BUZZER=8; const int UMBRAL=350;
void setup(){ pinMode(BUZZER,OUTPUT); Serial.begin(9600); }
void loop(){ int luz=analogRead(LDR); Serial.println(luz); if(luz<UMBRAL) tone(BUZZER,1000); else noTone(BUZZER); delay(100); }
