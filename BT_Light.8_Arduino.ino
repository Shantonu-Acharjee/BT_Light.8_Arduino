int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 7;
int led7 = 6;
int led8 = 5;
char t;
void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  

}

void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);

}
  if(t=='A')
  digitalWrite(led1,LOW);
  else if(t== 'B')
  digitalWrite(led2,LOW);
  else if(t== 'C')
  digitalWrite(led3,LOW);
  else if(t== 'D')
  digitalWrite(led4,LOW);
  else if(t== 'E')
  digitalWrite(led5,LOW);
  else if(t== 'F')
  digitalWrite(led6,LOW);
  else if(t== 'G')
  digitalWrite(led7,LOW);
  else if(t== 'H')
  digitalWrite(led8,LOW);
  else if(t== 'I'){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    
  }


  
  else if(t== '1')
  digitalWrite(led1,HIGH);
  else if(t== '2')
  digitalWrite(led2,HIGH);
  else if(t== '3')
  digitalWrite(led3,HIGH);
  else if(t== '4')
  digitalWrite(led4,HIGH);
  else if(t== '5')
  digitalWrite(led5,HIGH);
  else if(t== '6')
  digitalWrite(led6,HIGH);
  else if(t== '7')
  digitalWrite(led7,HIGH);
  else if(t== '8')
  digitalWrite(led8,HIGH);
  else if(t== '9'){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led7,HIGH);
    digitalWrite(led8,HIGH);
    
  }
  
  

}
