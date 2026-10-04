# Automated Irrigation Controller 🌱

This project is an automated irrigation system using an ESP32-S3 and a soil moisture sensor. It checks the moisture level of the soil and automatically controls a simulated water pump using a relay.

## Project Overview

The soil moisture sensor gives an analog value to the ESP32-S3. The ESP32 checks this value and decides whether the soil is dry or wet.

If the soil is dry, the relay turns ON and the LED represents the water pump.

If the soil is wet, the relay turns OFF and the LED turns OFF.

## Components Used

• ESP32-S3  
• Soil Moisture Sensor  
• 5V Relay Module  
• LED  
• 220Ω Resistor  
• Jumper Wires  
• Cirkit Designer for simulation  

## Pin Connections

| Component | ESP32-S3 |
|---|---|
| Soil Sensor VCC | 3.3V |
| Soil Sensor GND | GND |
| Soil Sensor SIG | GPIO 4 |
| Relay VCC | 5V/VBUS |
| Relay GND | GND |
| Relay IN | GPIO 5 |
| Relay COM | 5V/VBUS |
| Relay NO | LED Positive |
| LED Negative | 220Ω Resistor → GND |

## How It Works

1. The soil moisture sensor measures the soil moisture level.
2. The ESP32-S3 reads the sensor value through GPIO 4.
3. The sensor value is compared with a predefined threshold.
4. If the soil is dry, the relay is activated.
5. The LED turns ON and represents the water pump.
6. When the soil is wet, the relay turns OFF and the LED turns OFF.

## Moisture Threshold

The current threshold value is 2000.

When the sensor value is below 2000, the soil is considered dry and the water pump turns ON.

When the sensor value is 2000 or above, the soil is considered wet and the water pump turns OFF.

The threshold can be changed depending on the sensor readings.

## Programming

The project is programmed using Arduino C/C++.

The `millis()` function is used to read the sensor every 1 second without using `delay()`.

## Simulation

This project was created and tested using Cirkit Designer.

The LED is used as a simulated water pump because this project is implemented as a simulation.

## Features

• Automatic irrigation control  
• Soil moisture monitoring  
• Relay based pump control  
• Non blocking program using `millis()`  
• Serial Monitor output  
• Simulation using Cirkit Designer  

## Project Status

Completed and tested successfully.
