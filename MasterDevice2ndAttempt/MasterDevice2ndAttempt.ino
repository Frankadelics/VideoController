//Master Device YouTube Glove
//This is the device that is connected to the glove itself
//This will be the Uno
int FirstFinger = 12; //This is the green LED
int SecondFinger = 10; //This is the red LED
int ThirdFinger = 8; //This is the blue LED
int FourthFinger = 6; //This is the yellow LED

void writeToSerial(int );

void setup()
{ 
  for (int i = 6; i < 14; i+=2)
  {
    pinMode(i, INPUT_PULLUP);
    digitalWrite(i, HIGH);
  }
  Serial.begin(9600);
}

void loop() 
{
  if (digitalRead(FirstFinger) == LOW)
  {
    Serial.write('1');
    delay(150);
//    writeToSerial(FirstFinger);
  }
  else if (digitalRead(SecondFinger) == LOW)
  {
    Serial.write('2');
    delay(150);
//      writeToSerial(SecondFinger);
  }
  else if (digitalRead(ThirdFinger) == LOW)
  {
    Serial.write('3');
    delay(150);
  }
  else if (digitalRead(FourthFinger) == LOW)
  {
    Serial.write('4');
    delay(150);
  }
}

//Trying to make an int into a char so I can use less code. 

//void writeToSerial(int passedInt)
//{
//  String string = String(passedInt);
//  Serial.write(string);
//  delay(150);
//}
