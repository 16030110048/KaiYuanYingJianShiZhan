#include <Morse.h> 
Morse morse(13);
char incomingByte = 0; 
int i=0 ;
void setup()
{
   Serial.begin(9600);    
}
 
void loop()
{
  if ( Serial.available()>0 ){
     incomingByte = (char)Serial.read();
     if ( incomingByte == "a"){
        Serial.println("The morse is *- ");
        morse.dot(); morse.dash(); morse.c_space();   
    }  
     else if ( incomingByte == "b" ){
        Serial.println("The morse is -***");
        morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.c_space();
    }
     else if ( incomingByte == "c" ){
        Serial.println("The morse is -*-*");
        morse.dash(); morse.dot(); morse.dash(); morse.dot(); morse.c_space();
    }
     else if ( incomingByte == "d" ){
        Serial.println("The morse is -**");
        morse.dash(); morse.dot(); morse.dot(); morse.c_space();
    }
     else if ( incomingByte == "e" ){
        Serial.println("The morse is *");
        morse.dot(); morse.c_space();
    }
     else if ( incomingByte == "f" ){
        Serial.println("The morse is **-*");
        morse.dot(); morse.dot(); morse.dash(); morse.dot(); morse.c_space();
    }
     else if ( incomingByte == "g" ){
        Serial.println("The morse is --*");
        morse.dash(); morse.dash(); morse.dot(); morse.c_space();
    }
     else if ( incomingByte == "h" ){
        Serial.println("The morse is ****");
        morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "i" ){
        Serial.println("The morse is **");
        morse.dash(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "j" ){
        Serial.println("The morse is *---");
        morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "k" ){
        Serial.println("The morse is -*-");
        morse.dash(); morse.dot(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "l" ){
        Serial.println("The morse is *-**");
        morse.dot(); morse.dash(); morse.dot(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "m" ){
        Serial.println("The morse is --");
        morse.dot(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "n" ){
        Serial.println("The morse is -*");
        morse.dash(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "o" ){
        Serial.println("The morse is ---");
        morse.dash(); morse.dash(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "p" ){
        Serial.println("The morse is *--*");
        morse.dot(); morse.dash(); morse.dash(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "q" ){
        Serial.println("The morse is --*-");
        morse.dash(); morse.dash(); morse.dot(); morse.dash(); morse.c_space();
    }
    }
    else if ( incomingByte == "r" ){
        Serial.println("The morse is *-*");
        morse.dot(); morse.dash(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "s" ){
        Serial.println("The morse is ***");
        morse.dot(); morse.dot(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == "t" ){
        Serial.println("The morse is -");
        morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "u" ){
        Serial.println("The morse is **-");
        morse.dot(); morse.dot(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "v" ){
        Serial.println("The morse is ***-");
        morse.dot(); morse.dot(); morse.dot(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "w" ){
        Serial.println("The morse is *--");
        morse.dot(); morse.dash(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "x" ){
        Serial.println("The morse is -**-");
        morse.dash(); morse.dot(); morse.dot(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "y" ){
        Serial.println("The morse is -*--");
        morse.dash(); morse.dot(); morse.dash(); morse.dash(); morse.c_space();
    }
    else if ( incomingByte == "z" ){
        Serial.println("The morse is --**");
        morse.dash(); morse.dash(); morse.dot(); morse.dot(); morse.c_space();
    }
    else if ( incomingByte == ' '){
        morse.w_space();  
    }
}  
