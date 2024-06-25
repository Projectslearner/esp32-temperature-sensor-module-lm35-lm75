# ESP32 LM35 Temperature Sensor Project

### Project Overview
The ESP32 LM35 Temperature Sensor project demonstrates how to interface an LM35 analog temperature sensor with an ESP32 microcontroller to measure temperature. The LM35 sensor provides analog voltage output proportional to temperature, making it straightforward to integrate with microcontrollers for temperature sensing applications.

### Components Needed
- **ESP32 Microcontroller**: Controls and processes sensor data.
- **LM35 Temperature Sensor**: Analog temperature sensor.
- **Jumper Wires**: Connects the LM35 sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections.

### Block Diagram

### Circuit Setup
1. **Connecting the LM35 Sensor to ESP32:**
   - **Analog Pin (`lm35Pin`)**: Connect the output pin of the LM35 sensor to GPIO 34 on the ESP32.
   - **Power Supply**: Provide suitable power (5V or 3.3V) to the LM35 sensor and connect its ground pin to the ESP32 ground.

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging purposes.

2. **Operation:**
   - **Reading Temperature:**
     - Use `analogRead(lm35Pin)` to read the raw ADC value from the LM35 sensor.
     - Convert the ADC value to temperature in Celsius using the formula `temperatureC = adcValue / 10.24`.
     - Print the temperature to the Serial Monitor using `Serial.print` and `Serial.println`.

3. **Considerations:**
   - **Sensor Calibration:** Ensure the LM35 sensor is calibrated if precise temperature readings are required.
   - **Power Supply:** Provide stable power supply to the sensor to ensure accurate readings.
   - **Temperature Range:** Verify the operating temperature range of the LM35 sensor for your specific application.

### Applications
- **Weather Stations:** Monitor ambient temperature.
- **Thermal Management:** Control cooling systems based on temperature.
- **Home Automation:** Adjust heating systems based on room temperature.

### Useful Links
🌐 [ProjectsLearner - ESP32 LM35 Temperature Sensor](https://projectslearner.com/learn/esp32-lm35-temperature-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
