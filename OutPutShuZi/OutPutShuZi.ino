void setup() {
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    Serial.begin(9600);

}
int incoming = 0;
void loop() {
    
    if ( Serial.available() ){
      digitalWrite(7,LOW);
      delay(20);
      incoming = Serial.read();
      switch ( incoming ){
          case '0': 
            digitalWrite(3,LOW); digitalWrite(4,LOW); 
            digitalWrite(5,LOW); digitalWrite(6,LOW);
            break;
          case '1':
            digitalWrite(3,HIGH); digitalWrite(4,LOW); 
            digitalWrite(5,LOW); digitalWrite(6,LOW);
            break;
          case '2':
            digitalWrite(3,LOW); digitalWrite(4,HIGH); 
            digitalWrite(5,LOW); digitalWrite(6,LOW);
            break;
          case '3':
            digitalWrite(3,HIGH); digitalWrite(4,HIGH); 
            digitalWrite(5,LOW); digitalWrite(6,LOW);
            break;
          case '4':
            digitalWrite(3,LOW); digitalWrite(4,LOW); 
            digitalWrite(5,HIGH); digitalWrite(6,LOW);
            break;
          case '5':
            digitalWrite(3,HIGH); digitalWrite(4,LOW); 
            digitalWrite(5,HIGH); digitalWrite(6,LOW);
            break;
          case '6':
            digitalWrite(3,LOW); digitalWrite(4,HIGH); 
            digitalWrite(5,HIGH); digitalWrite(6,LOW);
            break;
          case '7':
            digitalWrite(3,HIGH); digitalWrite(4,HIGH); 
            digitalWrite(5,HIGH); digitalWrite(6,LOW);
            break;
          case '8':
            digitalWrite(3,LOW); digitalWrite(4,LOW); 
            digitalWrite(5,LOW); digitalWrite(6,HIGH);
            break;
          case '9':
            digitalWrite(3,HIGH); digitalWrite(4,LOW); 
            digitalWrite(5,LOW); digitalWrite(6,HIGH);
            break;
          default : break;   
        }
      delay(20);
      digitalWrite(7,HIGH);
      delay(20);
    }

}
