// Practica 12: Dos motores con driver, entradas de velocidad PWM
const int MOTOR1=5, MOTOR2=6;
void setup(){ pinMode(MOTOR1,OUTPUT); pinMode(MOTOR2,OUTPUT); }
void loop(){ analogWrite(MOTOR1,180); analogWrite(MOTOR2,180); delay(2000); analogWrite(MOTOR1,0); analogWrite(MOTOR2,0); delay(1000); }
