int led1 = 13;
int button = 7;
int button_value = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  button_value = digitalRead(button);
  
  if(button_value == 1){
    digitalWrite(led1, HIGH);
    delay(100);
    digitalWrite(led1, LOW);
    delay(100);
  }else{
    digitalWrite(led1, LOW);
  }
}