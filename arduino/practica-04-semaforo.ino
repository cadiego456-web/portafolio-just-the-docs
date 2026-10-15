// Practica 04: Semaforo simple
const int ROJO=10, AMARILLO=9, VERDE=8;
void setup(){ pinMode(ROJO,OUTPUT); pinMode(AMARILLO,OUTPUT); pinMode(VERDE,OUTPUT); }
void loop(){
 digitalWrite(ROJO,HIGH); delay(4000); digitalWrite(ROJO,LOW);
 digitalWrite(VERDE,HIGH); delay(4000); digitalWrite(VERDE,LOW);
 digitalWrite(AMARILLO,HIGH); delay(1500); digitalWrite(AMARILLO,LOW);
}
