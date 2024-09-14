/*
 * Tutorial By IOTkece.com
 */
#include "DHT.h"

#define DHT11_PIN 13 
#define DHTTYPE DHT11 
DHT dht(DHT11_PIN, DHTTYPE);

#define ON HIGH
#define OFF LOW

int x,y;

 /* 
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---  . dec
    D
    
*/ 

int pinA = 12;           
int pinB = 10;
int pinC = 8;
int pinD = 7;
int pinE = 6;   
int pinF = 11;
int pinG = 9;
int D1 = 5;
int D2 = 2;
int D3 = 3;
int D4 = 4;

int temp;
void setup() {
  Serial.begin(9600);

pinMode(pinA, OUTPUT);
pinMode(pinB, OUTPUT);
pinMode(pinC, OUTPUT);
pinMode(pinD, OUTPUT);
pinMode(pinE, OUTPUT);
pinMode(pinF, OUTPUT);
pinMode(pinG, OUTPUT);
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
pinMode(D4, OUTPUT);
pinMode(13,INPUT);

}

void cek_suhu(){
  temp = dht.readTemperature();
  x = (temp/10);
  y = (temp-((x)*10));

}


void loop() {
cek_suhu();
for (int i=1; i<=2; i++);
  {
   seven_segmen();
   }
}

void seven_segmen(){
digitalWrite(D1, ON);  
digit(x);
delay(4);
digitalWrite(D1, OFF);  

digitalWrite(D2, ON); 
digit(y);
delay(4);
digitalWrite(D2, OFF);  

digitalWrite(D3, ON);       
digit(10);
delay(4);
digitalWrite(D3, OFF); 

digitalWrite(D4, ON);           
digit(11);
delay(4);
digitalWrite(D4, OFF); 
}


void digit(int x) {
  switch (x) {
    case 0: nol(); break;
    case 1: satu(); break;
    case 2: dua(); break;
    case 3: tiga(); break;
    case 4: empat(); break;
    case 5: lima(); break;
    case 6: enam(); break;
    case 7: tujuh(); break;
    case 8: delapan(); break;
    case 9: sembilan(); break;
    case 10: o(); break;
    case 11: C(); break;
  }
}
void nol(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, OFF);
digitalWrite(pinE, OFF);
digitalWrite(pinF, OFF);
digitalWrite(pinG, ON);
delay(1);
}

void satu(){
digitalWrite(pinA, ON);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, ON);
digitalWrite(pinE, ON);
digitalWrite(pinF, ON);
digitalWrite(pinG, ON);
delay(1); 
}

void dua(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, OFF);
digitalWrite(pinC, ON);//
digitalWrite(pinD, OFF);
digitalWrite(pinE, OFF);
digitalWrite(pinF, ON);//
digitalWrite(pinG, OFF);
delay(1);
}

void tiga(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, OFF);
digitalWrite(pinE, ON);
digitalWrite(pinF, ON);
digitalWrite(pinG, OFF);
delay(1);
}

void empat(){
digitalWrite(pinA, ON);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, ON);
digitalWrite(pinE, ON);
digitalWrite(pinF, OFF);
digitalWrite(pinG, OFF);
delay(1);
}

void lima(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, ON);
digitalWrite(pinC, OFF);
digitalWrite(pinD, OFF);
digitalWrite(pinE, ON);
digitalWrite(pinF, OFF);
digitalWrite(pinG, OFF);
delay(1);
}

void enam(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, ON);
digitalWrite(pinC, OFF);
digitalWrite(pinD, OFF);
digitalWrite(pinE, OFF);
digitalWrite(pinF, OFF);
digitalWrite(pinG, OFF);
delay(1);
}

void tujuh(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, ON);
digitalWrite(pinE, ON);
digitalWrite(pinF, ON);
digitalWrite(pinG, ON);
delay(1);
}

void delapan(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, OFF);
digitalWrite(pinE, OFF);
digitalWrite(pinF, OFF);
digitalWrite(pinG, OFF);
delay(1); 
}

void sembilan(){
digitalWrite(pinA, OFF);
digitalWrite(pinB, OFF);
digitalWrite(pinC, OFF);
digitalWrite(pinD, OFF);
digitalWrite(pinE, ON);
digitalWrite(pinF, OFF);
digitalWrite(pinG, OFF);
delay(1);
}

void o()
{
  digitalWrite( pinA, OFF);
  digitalWrite( pinB, OFF);
  digitalWrite( pinC, ON);
  digitalWrite( pinD, ON);
  digitalWrite( pinE, ON);
  digitalWrite( pinF, OFF);
  digitalWrite( pinG, OFF);
  delay(1);
}

void C()
{
  digitalWrite( pinA, OFF);
  digitalWrite( pinB, ON);
  digitalWrite( pinC, ON);
  digitalWrite( pinD, OFF);
  digitalWrite( pinE, OFF);
  digitalWrite( pinF, OFF);
  digitalWrite( pinG, ON);
  delay(1);
}
