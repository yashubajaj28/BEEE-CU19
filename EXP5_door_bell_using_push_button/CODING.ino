
void setup() {
  // put your setup code here, to run once:
pinMode(12,INPUT);
pinMode(7,OUTPUT);
}

void loop() {

  // put your main code here, to run repeatedly:
    
if(digitalRead(12)==HIGH)
{
digitalWrite(7,HIGH);
}
else 
{
 digitalWrite(7,LOW);
}
  
}
