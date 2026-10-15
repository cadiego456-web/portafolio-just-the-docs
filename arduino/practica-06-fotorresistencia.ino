// Practica 06: LDR con divisor de voltaje hacia A0
const int LDR=A0, LED=9;
void setup(){ pinMode(LED,OUTPUT); Serial.begin(9600); }
void loop(){ int luz=analogRead(LDR); analogWrite(LED,map(luz,0,1023,0,255)); Serial.println(luz); delay(50); }
