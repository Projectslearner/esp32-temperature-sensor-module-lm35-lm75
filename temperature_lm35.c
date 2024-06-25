/*
   Project name: ESP32 LM35 Temperature Sensor
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-lm35-temperature-sensor
*/

// Analog pin connected to LM35 sensor
const int lm35Pin = 34; // GPIO 34 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the raw ADC value from LM35 sensor
  int adcValue = analogRead(lm35Pin);

  // Convert ADC value to temperature in Celsius
  float temperatureC = adcValue / 10.24;

  // Print temperature to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Delay before the next reading
}
