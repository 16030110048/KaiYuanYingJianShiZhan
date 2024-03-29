#include "Arduino.h"
#ifndef _MORSE_H
#define _MORSE_H

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
};
#endif /*_MORSE_H*/

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::c_space(){
  digitalWrite(_pin,LOW);
  delay(1000);
} 
void Morse::w_space(){
  digitalWrite(_pin,LOW);
  delay(2000);
} 
 
Morse morse(13);
char incomingByte = 0; 
int i=0 ;
void setup()
{
   Serial.begin(9600);    
}
 
void loop()
{
  if( Serial.available()>0 ){
     incomingByte = (char)Serial.read();
     switch ( incomingByte ){
        case 'a' :
          Serial.println("The morse is *- ");
          morse.dot(); morse.dash(); morse.c_space();   break;   
        case 'b' :
          Serial.println("The morse is -***");
          morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.c_space();   break;
        case 'c' :
          Serial.println("The morse is -*-*");
          morse.dash(); morse.dot(); morse.dash(); morse.dot(); morse.c_space();  break;
        case 'd' :
          Serial.println("The morse is -**");
          morse.dash(); morse.dot(); morse.dot(); morse.c_space(); break;
        case 'e' :
          Serial.println("The morse is *");
          morse.dot(); morse.c_space(); break;
        case 'f' :
          Serial.println("The morse is **-*");
          morse.dot(); morse.dot(); morse.dash(); morse.dot(); morse.c_space(); break;
        case 'g' :
          Serial.println("The morse is --*");
          morse.dash(); morse.dash(); morse.dot(); morse.c_space(); break;
        case 'h' :
          Serial.println("The morse is ****");
          morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.c_space(); break;
        case 'i' :
          Serial.println("The morse is **");
          morse.dash(); morse.dash(); morse.c_space(); break;
        case 'j' :
          Serial.println("The morse is *---");
          morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.c_space(); break;
        case 'k' :
          Serial.println("The morse is -*-");
          morse.dash(); morse.dot(); morse.dash(); morse.c_space(); break;
        case 'l' :
          Serial.println("The morse is *-**");
          morse.dot(); morse.dash(); morse.dot(); morse.dot(); morse.c_space(); break;
        case 'm' :
          Serial.println("The morse is --");
          morse.dot(); morse.dot(); morse.c_space(); break;
        case 'n' :
          Serial.println("The morse is -*");
          morse.dash(); morse.dot(); morse.c_space(); break;
        case 'o' :
          Serial.println("The morse is ---");
          morse.dash(); morse.dash(); morse.dash(); morse.c_space(); break;
        case 'p' :
          Serial.println("The morse is *--*");
          morse.dot(); morse.dash(); morse.dash(); morse.dot(); morse.c_space(); break;
        case 'q' :
          Serial.println("The morse is --*-");
          morse.dash(); morse.dash(); morse.dot(); morse.dash(); morse.c_space(); break;
        case 'r' :
          Serial.println("The morse is *-*");
          morse.dot(); morse.dash(); morse.dot(); morse.c_space(); break;
        case 's' :
          Serial.println("The morse is ***");
          morse.dot(); morse.dot(); morse.dot(); morse.c_space(); break;
        case 't':
          Serial.println("The morse is -");
          morse.dash(); morse.c_space(); break;
        case 'u':
          Serial.println("The morse is **-");
          morse.dot(); morse.dot(); morse.dash(); morse.c_space(); break;
        case 'v':
          Serial.println("The morse is ***-");
          morse.dot(); morse.dot(); morse.dot(); morse.dash(); morse.c_space(); break;
        case 'w':
          Serial.println("The morse is *--");
          morse.dot(); morse.dash(); morse.dash(); morse.c_space(); break;
        case 'x':
          Serial.println("The morse is -**-");
          morse.dash(); morse.dot(); morse.dot(); morse.dash(); morse.c_space(); break;
        case 'y':
          Serial.println("The morse is -*--");
          morse.dash(); morse.dot(); morse.dash(); morse.dash(); morse.c_space(); break;
        case 'z':
        Serial.println("The morse is --**");
        morse.dash(); morse.dash(); morse.dot(); morse.dot(); morse.c_space(); break;
        case ' ':
        morse.w_space();  break;
        default: break;
    }
  }
 }  
