int dioda=13;
void setup()
{
  pinMode(dioda, OUTPUT);
}

void loop()
{
  for(int i=0; i<3; i= i+1){
  digitalWrite(dioda,HIGH);
    delay(200);
    digitalWrite(dioda,LOW);
    delay(200);
  }
 for(int j=0; j<3; j= j+1){
  digitalWrite(dioda,HIGH);
    delay(1000);
    digitalWrite(dioda,LOW);
    delay(200);
 }
   for(int k=0; k<3; k= k+1){
  digitalWrite(dioda,HIGH);
    delay(200);
    digitalWrite(dioda,LOW);
    delay(200);
   }
  delay(3000);
}
