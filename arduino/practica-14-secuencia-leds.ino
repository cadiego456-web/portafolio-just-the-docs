// Practica 14: Secuencia de cuatro LEDs en pines 4 a 7
const int leds[]={4,5,6,7};
void setup(){ for(int i=0;i<4;i++) pinMode(leds[i],OUTPUT); }
void loop(){ for(int i=0;i<4;i++){ digitalWrite(leds[i],HIGH); delay(250); digitalWrite(leds[i],LOW); } for(int i=2;i>0;i--){ digitalWrite(leds[i],HIGH); delay(250); digitalWrite(leds[i],LOW); } }
