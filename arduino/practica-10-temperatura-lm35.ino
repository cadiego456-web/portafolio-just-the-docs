// Practica 10: LM35 conectado a A0, alimentacion 5V y GND
void setup(){ Serial.begin(9600); }
void loop(){ int lectura=analogRead(A0); float voltaje=lectura*(5.0/1023.0); float celsius=voltaje*100.0; Serial.print(celsius); Serial.println(" C"); delay(1000); }
