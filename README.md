# ESP32 Soil Moisture Sensor with Auto-Calibration: 
    A simple Arduino sketch for ESP32 that reads soil moisture levels with automatic calibration feature. 
    This code helps you measure soil moisture percentage and automatically calibrates the sensor for dry and wet conditions.

# Project Description:

    This project uses an ESP32 microcontroller and a soil moisture sensor to measure soil moisture levels. 
    The code includes an auto-calibration routine that guides the user through dry and wet calibration steps for accurate moisture percentage calculations.

# Hardware Requirements:
## Components Needed:

    ESP32 Development Board
    Soil Moisture Sensor (Analog)
    Jumper Wires
    Breadboard (optional)

## Circuit Connections:

    Moisture Sensor VCC → ESP32 3.3V
    Moisture Sensor GND → ESP32 GND
    Moisture Sensor AO → ESP32 GPIO 2

# Calibration Process
The code includes an automatic calibration routine:

    Step 1: Dry Calibration
            When prompted, place the sensor in air (completely dry)
            The code will read and store the dry reference value

    Step 2: Wet Calibration
            When prompted, place the sensor in water
            The code will read and store the wet reference value

    Step 3: Normal Operation
            After calibration, the sensor will display moisture percentage
            0% = Dry reference value
            100% = Wet reference value

# Code Features:

    Auto-calibration for accurate readings
    Real-time moisture percentage calculation
    Serial monitoring for debugging and data logging
    Configurable calibration process
    Error-constrained values (0-100% range)



