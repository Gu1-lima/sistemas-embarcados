// C++ code
//
const int led = 8;
void setup() 
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  const int temp = 0;
  delay(5000);
  const int desligar = temp+1;
}