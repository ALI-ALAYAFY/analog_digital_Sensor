int sensorPin = 0;
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
 
 int reading = analogRead(sensorPin);
 // measure the 5v with a meter for an accurate value
 //In particular if your Arduino is USB powered
 float voltage = reading * 4.68;
 voltage /= 1024.0;
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100;
 Serial.print(temperatureC);
 Serial.println(" degrees C");
 
 delay(1000);
}
 
