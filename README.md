# Objective-
The Rain Sensing Car Wiper is an automated system that detects rain and activates a wiper mechanism using a servo motor. This project uses a rain drop sensor module connected to an Arduino Nano. When water is detected, the servo motor simulates the motion of a car wiper, making the system fully automatic.
# Components Used-
1. Arduino Nano
2. Rain Drop Sensor (with I2C module)
3. Servo Motor
4. Breadboard
5. Jumper Wires
6. Battery (Power Supply)
7. USB Cable
# Working Principle-
The rain sensor detects water droplets and sends a signal to Arduino.
If rain is detected (LOW signal):
The servo motor starts rotating between 0° and 90°.
If no rain (HIGH signal):
The servo stops and returns to its initial position.
Serial Monitor displays the status:
"Rain detected! Wiper ON."
"Rain Stopped! Wiper OFF."
# How to Run the Project-
1. Circuit Connections-
Rain Sensor → Arduino
VCC → 5V
GND → GND
DO → Pin 2
Servo Motor → Arduino
Red → 5V
Brown/Black → GND
Yellow/Orange → Pin 9
2. Upload Code-
Connect Arduino Nano using USB cable
Open Arduino IDE
Select:
Board: Arduino Nano
Port: COM Port
Upload the code
3. Power the Circuit-
Use battery or USB power supply.
4. Testing-
Sprinkle water on the sensor
Servo will start moving like a wiper
Remove water → servo stops
# Applications-
Smart car wiper systems
Automatic rain detection
IoT-based weather systems
# Future Improvements-
Variable wiper speed based on rain intensity
LCD/OLED display integration
IoT monitoring system
Real vehicle implementation
# Author-
Vaishnavi Jaiswal
