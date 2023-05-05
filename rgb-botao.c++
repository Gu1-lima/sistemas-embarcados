// C++ code
//
int ledVermelho=8;
int ledAzul=7;
int ledVerde=6;
int btnVermelho=3;
int btnAzul=4;
int btnVerde=1;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(btnVermelho, INPUT);
  
  pinMode(ledVerde, OUTPUT);
  pinMode(btnVerde, INPUT);
  
  pinMode(ledAzul, OUTPUT);
  pinMode(btnAzul, INPUT);
}
void loop()
{
 int valdireneVermelho = digitalRead(btnVermelho);
  if (valdireneVermelho== HIGH){
    digitalWrite(ledVermelho, LOW);
}
  else{
    digitalWrite(ledVermelho, HIGH);
  } 
  
 int valdireneVerde = digitalRead(btnVerde);
  if (valdireneVerde== HIGH){
    digitalWrite(ledVerde, LOW);
}
  else{
    digitalWrite(ledVerde, HIGH);
  } 
   
 int valdireneAzul = digitalRead(btnAzul);
  if (valdireneAzul== HIGH){
    digitalWrite(ledAzul, LOW);
}
  else{
    digitalWrite(ledAzul, HIGH);
  } 
  
}