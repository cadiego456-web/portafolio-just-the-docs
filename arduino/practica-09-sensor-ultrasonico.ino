// Practica 09: HC-SR04 TRIG=9, ECHO=10
const int TRIG=9, ECHO=10;
void setup(){ pinMode(TRIG,OUTPUT); pinMode(ECHO,INPUT); Serial.begin(9600); }
void loop(){ digitalWrite(TRIG,LOW); delayMicroseconds(2); digitalWrite(TRIG,HIGH); delayMicroseconds(10); digitalWrite(TRIG,LOW); long t=pulseIn(ECHO,HIGH,30000); float cm=t*0.0343/2; Serial.print("Distancia: "); Serial.print(cm); Serial.println(" cm"); delay(300); }
