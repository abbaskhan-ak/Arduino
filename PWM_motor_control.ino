int trans=6;
void setup() {
  // put your setup code here, to run once:
  pinMode(trans,OUTPUT);
  pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int input=analogRead(A0);
 int output=map(input,0,1023,0,255);
  analogWrite(trans,output);
  delay(250);
}
