//Slave device YouTube Glove
//This is the device that will be connected to the computer
//This is the Arduino Uno 

//#include <Keyboard.h>

//An LED that is used to indicate whether we recieved something from the serial monitor
int greenLEDPin = 9;
int state = 0;
void setup()
{
  pinMode(greenLEDPin, INPUT);
  digitalWrite(greenLEDPin, LOW);
  Serial.begin(9600);
 // Keyboard.begin();
}

void loop()
{
  //Read what is in the serial port and save it to state
  state = Serial.read();

  if (state == '1')
  {
    Serial.print("I got your message. LED ON!\n");
    digitalWrite(greenLEDPin, HIGH);
    delay(150);
  }
  else
  {
    Serial.print("No message recieved. LED OFF!\n");
    digitalWrite(greenLEDPin, LOW);
    delay(150);
  }
}
