int ledred=13;
int ledyellow=12;
int ledgreen=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledred,OUTPUT);
  pinMode(ledyellow,OUTPUT);
  pinMode(ledgreen,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledred,HIGH);
  delay(3000);
  digitalWrite(ledred,LOW);
  digitalWrite(ledyellow,HIGH);
  delay(1000);
  digitalWrite(ledyellow,LOW);
  digitalWrite(ledgreen,HIGH);
  delay(4000);
  digitalWrite(ledgreen,LOW);
  
}

