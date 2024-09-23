int buzzer = 9; 
int button = 3;
void setup(){
  pinMode(buzzer, OUTPUT); 
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop(){
  int value;
  value=digitalRead(button);
  Serial.println(value);
  if (value==1){
    digitalWrite(buzzer, 1);
  }
  else {
    digitalWrite(buzzer, 0);
  }
  delay(10);       
}