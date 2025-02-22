# Arduino Projects Repository

Welcome to the **Arduino Projects Repository**! This repository contains simple and engaging Arduino projects for beginners and intermediate learners. Each project includes a description, required components, and step-by-step instructions.

---

## **Beginner Projects**

### **1. Blinking LED**
#### Description:
A basic project to make an LED blink at a set interval, introducing digital output and delay functions.

#### Components Required:
- Arduino Uno
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the LED's longer leg (anode) to Arduino pin 9 through a 220Ω resistor.
2. Connect the shorter leg (cathode) to GND.
3. Upload the code to make the LED blink every second.

---

### **2. Button-Controlled LED**
#### Description:
This project turns an LED on when a button is pressed and off when released.

#### Components Required:
- Arduino Uno
- Push Button
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect one leg of the button to 5V and the other to Arduino pin 2.
2. Connect a 10KΩ pull-down resistor from pin 2 to GND.
3. Connect an LED to pin 9 with a 220Ω resistor.
4. Upload the code to turn the LED on when the button is pressed.

---

### **3. Buzzer Alarm**
#### Description:
A simple project where a buzzer sounds when a button is pressed.

#### Components Required:
- Arduino Uno
- Buzzer
- Push Button
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect one leg of the button to 5V and the other to Arduino pin 3.
2. Connect a 10KΩ pull-down resistor from pin 3 to GND.
3. Connect the buzzer's positive leg to pin 9 and the negative to GND.
4. Upload the code to sound the buzzer when the button is pressed.

---

### **4. RGB LED Controller**
#### Description:
This project controls an RGB LED to change colors.

#### Components Required:
- Arduino Uno
- RGB LED
- 3x 220Ω Resistors
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the RGB LED’s common cathode to GND.
2. Connect the red, green, and blue pins to Arduino pins 9, 10, and 11 through 220Ω resistors.
3. Upload the code to change LED colors.

---

### **5. Ultrasonic Distance Measurement**
#### Description:
Measures distance using an HC-SR04 sensor and prints the values to the Serial Monitor.

#### Components Required:
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the VCC and GND of HC-SR04 to 5V and GND.
2. Connect Trig to pin 9 and Echo to pin 10.
3. Upload the code to measure and display distances.

---

### **6. Servo Motor Control with Button**
#### Description:
Moves a servo when a button is pressed.

#### Components Required:
- Arduino Uno
- Servo Motor
- Push Button
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the servo's VCC and GND to 5V and GND.
2. Connect the signal wire to pin 9.
3. Connect the button to pin 2 with a 10KΩ pull-down resistor.
4. Upload the code to move the servo when the button is pressed.

---

## **Intermediate Projects**

### **7. Touchless Automatic Door**
#### Description:
Uses an ultrasonic sensor and a servo to simulate an automatic door.

#### Components Required:
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the HC-SR04 sensor to pins 9 and 10.
2. Connect the servo to pin 6.
3. Upload the code to open the servo when an object is detected within a certain distance.

---

### **8. Temperature & Humidity Monitor**
#### Description:
Reads temperature and humidity using a DHT11 sensor and displays the values in the Serial Monitor.

#### Components Required:
- Arduino Uno
- DHT11 Sensor
- 10KΩ Resistor
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the DHT11 sensor’s VCC and GND to 5V and GND.
2. Connect the data pin to Arduino pin 7.
3. Upload the code to read and display values.

---

### **9. Smart Parking System**
#### Description:
Detects obstacles using an ultrasonic sensor and controls a servo barrier.

#### Components Required:
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the HC-SR04 sensor to pins 9 and 10.
2. Connect the servo to pin 6.
3. Upload the code to move the servo when a car is detected.

---

### **10. Multicolor LED Controller**
#### Description:
Uses push buttons to change the RGB LED colors.

#### Components Required:
- Arduino Uno
- RGB LED
- 3x Push Buttons
- 3x 220Ω Resistors
- Jumper Wires
- Breadboard

#### Instructions:
1. Connect the RGB LED’s common cathode to GND.
2. Connect the red, green, and blue pins to Arduino pins 9, 10, and 11 through 220Ω resistors.
3. Connect each button to a pin (e.g., 2, 3, 4) with a 10KΩ pull-down resistor.
4. Upload the code to change colors when buttons are pressed.

---

## **Conclusion**
- These projects help beginners and intermediate learners build confidence in electronics and coding.
- Modify and expand them to create your own innovative projects!
- Feel free to contribute and improve this repository.
