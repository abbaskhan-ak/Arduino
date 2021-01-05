int ledred=12;
int ledyellow=11;
int ledgrn=10;
float pot;
float value;
int relay=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledred,OUTPUT);
  pinMode(ledyellow,OUTPUT);
  pinMode(ledgrn,OUTPUT);
  pinMode(relay,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot=analogRead(A0);
  value=(pot/1023.0)*5.0;
  if(value<=1.0){
    digitalWrite(ledred,HIGH);
    digitalWrite(ledyellow,LOW);
    digitalWrite(ledgrn,LOW);
    digitalWrite(relay,HIGH);
    }
  else if(value>=2.50 and value<=3.5){
    digitalWrite(ledred,LOW);
    digitalWrite(ledyellow,HIGH);
    digitalWrite(ledgrn,LOW);
    digitalWrite(relay,HIGH);
  }
  else if(value==5.00){
    digitalWrite(ledred,LOW);
    digitalWrite(ledyellow,LOW);
    digitalWrite(ledgrn,HIGH);
    digitalWrite(relay,LOW);
  }
  delay(500);
}
