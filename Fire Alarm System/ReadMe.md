# Fire Alarm System Project by Interfacing Arduino with Temperature & Gas Sensor

## Overview

This project demonstrates how to build a **Fire Alarm System** by interfacing an Arduino UNO with both a temperature sensor and a gas sensor. The system detects abnormal increases in temperature or the presence of hazardous gases and triggers an alarm using a buzzer and LED. This approach enhances safety by providing early warnings for fire and gas leaks[1][2][3].

## Components Required

- **Arduino UNO Board**
- **Temperature Sensor (e.g., LM35 or TMP36)**
- **Gas Sensor (e.g., MQ2)**
- **Buzzer**
- **LED**
- **Resistors**
- **Breadboard and Jumper Wires**
- **USB Cable (for power/programming)**

## Circuit Diagram

- **Temperature Sensor:** Connect VCC and GND to the breadboard rails, and the output to Arduino analog pin A1.
- **Gas Sensor:** Connect VCC and GND to the breadboard rails, and the analog output to Arduino analog pin A0.
- **Buzzer:** Connect to a digital pin (e.g., D8).
- **LED:** Connect to a digital pin (e.g., D13) with a resistor in series.

## How It Works

1. **Continuous Monitoring:** The Arduino reads values from both the temperature and gas sensors.
2. **Threshold Detection:** If either the temperature exceeds a set value (e.g., 50°C) or the gas concentration surpasses a safe limit, the system identifies a potential hazard.
3. **Alarm Activation:** The buzzer sounds and the LED lights up to alert users.
4. **Reset:** The alarm deactivates when sensor values return to safe levels[1][2][4].

## Pin Connections Table

| Component         | Arduino Pin   | Breadboard Connection         |
|-------------------|--------------|------------------------------|
| Temperature Sensor| A1           | VCC, GND, Signal to A1       |
| Gas Sensor        | A0           | VCC, GND, Signal to A0       |
| Buzzer            | D8           | Positive terminal            |
| LED               | D13          | Anode (+), Cathode to GND    |
| Resistor (LED)    | Series with LED|                              |



  
