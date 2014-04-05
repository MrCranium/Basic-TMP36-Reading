int sensorPin = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int reading = analogRead(sensorPin);
  float voltage = reading * 5.0; //Change 5.0 to 3.3 if you are using 
                                //3.3V instead of 5V.
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  
  Serial.print(temperatureF); Serial.println(" degrees F");
  
  delay(1000);
  
}
