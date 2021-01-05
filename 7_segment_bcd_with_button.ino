bool but;
int a=12;
int b=11;
int c=10;
int d=9;
int x=1;
bool state=false;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(2,INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
   but=digitalRead(2);
   if(but==HIGH && x==1){
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
   }
     if(but==HIGH && x==2){
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
     }
   else if (but==HIGH && x==3){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(500);
  x++;
   }
   else if(but==HIGH && x==4){
   digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
   }
   else if(but==HIGH && x==5){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
   }
     if(but==HIGH && x==6){
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
     }
        if(but==HIGH && x==7){
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
     }
        if(but==HIGH && x==8){
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
     }
        if(but==HIGH && x==9){
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  but=LOW;
  delay(500);
  x++;
     }
        if(but==HIGH && x==10){
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  but=LOW;
  delay(500);
  x++;
     }
      if(but==HIGH && x==11){
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
   }
   if(but==HIGH && x==12){
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  but=LOW;
  delay(500);
  x++;
   }
    else if (but==HIGH && x==13){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  delay(500);
  x++;
 }
}
