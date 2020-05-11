/*
 * 
  http://brisbaneroboticsclub.id.au/read-voltage-from-lipo-battery-smart-lead/
  
*/

float voltage = 0;

// the setup routine runs once when you press reset:
void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  // read the input on analog pin 0:
  voltage = analogRead(A0);

  voltage = voltage / 1023;

  voltage = voltage * 5.0;
  
  // print out the value you read:
  
  // Print motor speed to montor.
  Serial.print("Volts : ");
  Serial.print("\t");
  Serial.println(voltage);
  
  delay(100);        // delay in between reads for stability
}
