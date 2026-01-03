# early-innovation-projects
A collection of my early innovation and school-level engineering projects, including a Gas Leakage Detection System showcased at a district-level exhibition.


🚨 Gas Leakage Detection System

📌 Overview

The Gas Leakage Detection System is a safety-oriented embedded system designed to detect the presence of hazardous gases such as LPG and methane in the surrounding environment. The system continuously monitors gas concentration and provides immediate audio-visual alerts when gas levels exceed a predefined safe threshold, helping to prevent fire hazards and explosions.

This project was developed and demonstrated at a District-Level Exhibition conducted at MET Bhujbal Knowledge City, where it was evaluated over a three-day competition.

✨ Features

Real-time gas leakage detection

Audio alert using buzzer

Visual alert using LED indicator

Low-cost and reliable design

Easy to simulate and implement

Suitable for homes, kitchens, and small industries

🛠 Components Used

MQ-series Gas Sensor (MQ-2 / MQ-6)

Arduino Uno (Microcontroller)

Buzzer (Alarm unit)

LED Indicator

Resistors

Breadboard / PCB

Connecting wires

Power supply (5V / 9V)

Circuit / Connection Diagram

The circuit consists of an MQ gas sensor connected to the analog input of the microcontroller.
The buzzer and LED are connected to digital output pins.

The gas sensor continuously senses gas concentration and outputs an analog voltage proportional to the detected gas level. This signal is processed by the microcontroller to determine whether the gas concentration exceeds the safe limit.

⚙️ Working Principle

The gas sensor continuously monitors the surrounding air.

The sensor produces an analog output based on gas concentration.

The microcontroller reads this value using its ADC.

If the sensor value exceeds a predefined threshold:

The buzzer is activated

The LED indicator turns ON

If the gas concentration returns to normal levels:

The buzzer and LED are turned OFF

This ensures early warning and improves safety.


💻 Code Explanation

The Arduino program continuously reads analog values from the gas sensor. A threshold value is defined to represent unsafe gas concentration.

If the sensor value exceeds the threshold, the controller activates the buzzer and LED.

If the value is below the threshold, the alert devices remain OFF.

The code is written in basic Arduino C, making it easy to understand, modify, and simulate.


📊 Results

Successfully detected gas leakage in real-time

Immediate audio-visual alert generation

Stable and reliable system operation

Demonstrated practical application of sensors and microcontrollers


🚀 Future Improvements

GSM-based SMS alert system

Automatic gas valve shut-off mechanism

IoT-based monitoring using mobile application

LCD display for gas level indication
