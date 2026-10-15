// Practica 05: Leer potenciometro en A0 y mostrar valor
void setup(){ Serial.begin(9600); }
void loop(){ int valor=analogRead(A0); Serial.println(valor); delay(250); }
