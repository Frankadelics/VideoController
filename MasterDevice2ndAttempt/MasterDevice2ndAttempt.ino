//Master Device YouTube Glove
//This is the device that is connected to the glove itself
//This will be the Micro

int FirstFinger = 9;

void setup()
{ 
  pinMode(FirstFinger, INPUT_PULLUP);
  digitalWrite(FirstFinger, HIGH);
  Serial1.begin(9600);
}

void loop() 
{
  if (digitalRead(FirstFinger) == LOW)
  {
    Serial1.write('1');
    delay(150);
  }
  else
  {
    Serial1.write('N');
    delay(150);
  }
}
