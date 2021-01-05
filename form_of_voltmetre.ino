float y;
int x;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  x=analogRead(A0);
  Serial.println(y);
  y=(x/1023.0)*5.0;
  delay(250);
  
}
