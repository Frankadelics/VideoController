//Slave device YouTube Glove
//This is the device that will be connected to the computer
//This is the Arduino Micro

#include <Keyboard.h>

//An LED that is used to indicate whether we recieved something from the serial monitor
int greenLEDPin = 12;
int redLEDPin = 10;
int blueLEDPin = 8;
int yellowLEDPin = 6;
int state = 0;

void setup()
{
  for (int i = 6; i < 14; i+=2)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  Serial1.begin(9600);
  Keyboard.begin();
}

void loop()
{
  state = Serial1.read();
  Serial1.print(state);
 
  if (state == '1')
  {
    digitalWrite(greenLEDPin, HIGH);
    delay(150);
    digitalWrite(greenLEDPin, LOW);
    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.release(KEY_LEFT_ARROW);
  }
  else if (state == '2')
  {
    digitalWrite(redLEDPin, HIGH);
    delay(150);
    digitalWrite(redLEDPin, LOW);
    Keyboard.press(KEY_RIGHT_ARROW);
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  else if (state == '3')
  {
    digitalWrite(blueLEDPin, HIGH);
    delay(150);
    digitalWrite(blueLEDPin, LOW);
  }
  else if (state == '4')
  {
    digitalWrite(yellowLEDPin, HIGH);
    delay(150);
    digitalWrite(yellowLEDPin, LOW);
  }

}
