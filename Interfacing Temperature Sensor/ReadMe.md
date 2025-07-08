# Interfacing Temperature Sensor with Arduino UNO


## Components Required

- Arduino UNO board
- Temperature sensor (TMP36, LM35, or similar)
- Jumper wires
- USB cable for Arduino

## Circuit Diagram

The temperature sensor has three pins:

| Sensor Pin | Connection         |
|------------|-------------------|
| Left (VCC) | Arduino 5V        |
| Middle (OUT)| Arduino A0        |
| Right (GND)| Arduino GND       |

## Wiring Instructions

1. **VCC (Red wire):** Connect the leftmost pin of the sensor to the 5V pin on Arduino.
2. **GND (Black wire):** Connect the rightmost pin of the sensor to the GND pin on Arduino.
3. **OUT (Green wire):** Connect the middle pin of the sensor to the analog pin A0 on Arduino.

or's formula.
- The result is printed to the Serial Monitor.



