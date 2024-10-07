const int RED_led = 12;
const int YEL_led = 10;
const int GRE_led = 8;
void setup()
{
  pinMode(RED_led, OUTPUT);
  pinMode(YEL_led, OUTPUT);
  pinMode(GRE_led, OUTPUT);
}

void loop()
{
  digitalWrite(RED_led, HIGH);
  delay(15000); 
  digitalWrite(RED_led, LOW);
  digitalWrite(YEL_led, HIGH);
  delay(5000);
  digitalWrite(YEL_led, LOW);
  digitalWrite(GRE_led, HIGH);
  delay(10000);
  digitalWrite(GRE_led, LOW);
}
