int led1 = 13;
int led2 = 12;
int led3 = 11;
bool a;
bool b;
bool c;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(2);
b=digitalRead(3);
c=digitalRead(4);
digitalWrite(led1,a);
digitalWrite(led2,b);
digitalWrite(led3,c);
}
