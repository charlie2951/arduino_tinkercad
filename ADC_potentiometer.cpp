// C++ code to read potentiometer and display over serial port
//
int sensor=A0;
int digitalval=0;
float analogval=0.0;
void setup()
{
Serial.begin(9600);
}

void loop()
{
    delay(10); // Delay a little bit to improve simulation performance
digitalval=analogRead(sensor);
  analogval=digitalval*5/1023;
  Serial.print("Analog value is: ");
  Serial.println(analogval);
  delay(3000);
}