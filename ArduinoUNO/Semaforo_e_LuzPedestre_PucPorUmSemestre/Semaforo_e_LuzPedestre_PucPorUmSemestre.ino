int i=5;
int j=4;
void setup() {

pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(j,OUTPUT);
pinMode(i,OUTPUT);
}

void loop() {

 digitalWrite(10, HIGH);
 digitalWrite(j,HIGH);
  delay(4000);            
  digitalWrite(10, LOW);
  digitalWrite(j,LOW);

 digitalWrite(9, HIGH);
 delay(1000);
 digitalWrite(9, LOW);

 digitalWrite(8, HIGH);
digitalWrite(i,HIGH);
 delay(4000);
 digitalWrite(8, LOW);
 digitalWrite(i,LOW);
}