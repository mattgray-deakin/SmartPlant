  /*
 SmartPlant Project 4.1C for SIT107 
 Matthew Gray 212417139
 Threshold for watering is 300, as above that is damp soil, will confirm with user if it needs adjustment
 Humidity sensor connected to +5V, GND and A0
 */
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(LED_BUILTIN, OUTPUT);  // Setup the Built-in LED as an output
}
void loop() {
  int humidity;             // Integer for the humidity reading
  humidity = analogRead(0); // Take humidity reading from Analog pin 0
  Serial.println(humidity);      //print the value to serial port for debugging
  if (humidity <= 300) {
    digitalWrite(LED_BUILTIN, HIGH); // Set LED to on if humidity is equal to or below 300
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); // Set LED to off if humidity reading above 300
  }
  delay(1000);
}
