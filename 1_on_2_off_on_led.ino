bool state=false;
char x;
int led=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
   x=Serial.read();
  }
  if(x=='1'){
    state = true;
  }
  else if(x=='2'){
    state=false;
  }
  digitalWrite(led,state);
  
}
