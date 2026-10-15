// Practica 08: Servo en señal pin 9 (fuente adecuada si hace falta)
#include <Servo.h>
Servo servo;
void setup(){ servo.attach(9); }
void loop(){ for(int a=0;a<=180;a+=2){servo.write(a);delay(15);} for(int a=180;a>=0;a-=2){servo.write(a);delay(15);} }
