// Practica 11: Motor DC mediante driver/transistor; nunca directo al pin
const int MOTOR=5;
void setup(){ pinMode(MOTOR,OUTPUT); }
void loop(){ analogWrite(MOTOR,180); delay(2000); analogWrite(MOTOR,0); delay(2000); }
