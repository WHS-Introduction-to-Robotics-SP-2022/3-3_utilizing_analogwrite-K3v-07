
int redLED = 11;
int greenLED = 10;
int blueLED = 9;

void setup(){
  // Initialize pins as output devices
  pinMode(redLED,OUTPUT );
  pinMode(greenLED,OUTPUT );
  pinMode(blueLED,OUTPUT );
}

void loop(){
  // Red LED cycle
  analogWrite(redLED,256 );
  delay(500);
  analogWrite(redLED, 100);
  delay(500);// 40% power
  analogWrite(redLED,0 ); 
  delay(500);// no power

  // Green LED cycle
  analogWrite(greenLED,256 );
  delay(500);// full power
  analogWrite(greenLED, 100);
  delay(500);// 40% power
  analogWrite(greenLED,0 ); 
  delay(500);// no power
  // Blue LED cycle
  analogWrite(blueLED,256 ); 
  delay(500);// full power
  analogWrite(blueLED, 100);
  delay(500);// 40% power
  analogWrite(blueLED,0 ); 
  delay(500);// no power
}
