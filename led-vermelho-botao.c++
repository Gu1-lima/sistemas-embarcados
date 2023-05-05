// C++ code
//
const int led = 12;
const int btn = 2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{
 int veri = digitalRead(btn);
  if(veri == HIGH){
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led, HIGH);
  }
}