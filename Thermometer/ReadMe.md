# 🌡️ DIY Thermometer Using ATtiny85

## 📝 Overview

This project demonstrates how to build a simple digital thermometer using an **ATtiny85 microcontroller**, a temperature sensor, an LED indicator, and a battery pack. It's a great introduction to microcontroller-based sensing and basic electronics.

## ⚙️ Components

- ATtiny85 microcontroller
- TMP temperature sensor (e.g., TMP36)
- LED (indicator)
- Resistor (for LED, e.g., 220Ω)
- AA battery pack (3 x 1.5V AA batteries)
- Jumper wires

## 🖼️ Circuit Diagram

Below is the circuit layout for the DIY thermometer:

- **Battery Pack**: Supplies power (4.5V) to the circuit.
- **ATtiny85**: Reads the temperature sensor and controls the LED.
- **TMP Sensor**: Measures temperature and sends analog data to the ATtiny85.
- **LED & Resistor**: The LED lights up based on the programmed temperature threshold.

## 🚀 How It Works

1. **Power Supply**: The battery pack provides 4.5V to the entire circuit.
2. **Temperature Sensing**: The TMP sensor outputs a voltage proportional to the ambient temperature.
3. **Microcontroller Processing**: The ATtiny85 reads the sensor's analog output, processes the value, and determines if the temperature exceeds a set threshold.
4. **LED Indicator**: If the temperature is above the threshold, the ATtiny85 turns on the LED as a visual alert.

## 🛠️ Assembly Steps

1. **Connect the Battery Pack**: Wire the positive and negative terminals to the ATtiny85 and TMP sensor accordingly.
2. **Wire the TMP Sensor**: Connect its Vcc and GND to power, and its output to an analog input pin of the ATtiny85.
3. **Connect the LED**: Attach the LED (with a resistor in series) to a digital output pin of the ATtiny85 and GND.
4. **Upload Code**: Program the ATtiny85 to read the sensor and control the LED.

