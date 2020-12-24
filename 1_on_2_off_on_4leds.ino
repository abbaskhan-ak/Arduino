//bool state;
char x;
int led=13;
int led2=12;
int led3=11;
int led4=10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.available();
   x=Serial.read();
  if(x=='1'){
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  else if(x=='2'){
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    }
   else if(x=='3'){
    digitalWrite(led,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    
    
    
    }
   else if(x=='4'){
    digitalWrite(led,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    }

  
}
