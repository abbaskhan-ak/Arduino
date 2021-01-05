
int a=12;
int b=11;
int c=10;
int d=9;
int e=8;
int f=7;
int g=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  delay(1000);
  digitalWrite(a,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  digitalWrite(e,LOW);
 
  
  
  
  

  
}
