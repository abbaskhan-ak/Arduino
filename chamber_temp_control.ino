float sensor1=A0;
float sensor2=A1;
int fan1=12;
int fan2=11;
float v1;
float v2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(fan1,OUTPUT);
  pinMode(fan2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor1=analogRead(A0);
  sensor2=analogRead(A1);
  v1=sensor1*(5.0/1023.0);
  v2=sensor2*(5.0/1023.0);
  if(v1>0.50 && v2>0.50){
    digitalWrite(fan1,HIGH);
    digitalWrite(fan2,HIGH);
 
  }

  else if (v1<0.50 && v2<0.50){
    digitalWrite(fan1,LOW);
    digitalWrite(fan2,LOW);
  }
  

}
