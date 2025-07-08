# Interface an Ultrasonic Sensor with Arduino uno

## Components Required

- Arduino UNO board
- HC-SR04 ultrasonic sensor
- Jumper wires
- USB cable for Arduino

## Circuit Diagram

Connect the HC-SR04 sensor to the Arduino UNO as follows:

| HC-SR04 Pin | Arduino UNO Pin |
|-------------|-----------------|
| VCC         | 5V              |
| GND         | GND             |
| Trig        | Digital Pin 9   |
| Echo        | Digital Pin 10  |

## Wiring Instructions

1. **VCC** (Red wire): Connect to Arduino **5V**.
2. **GND** (Black wire): Connect to Arduino **GND**.
3. **Trig** (Green wire): Connect to **Digital Pin 9** on Arduino.
4. **Echo** (Blue wire): Connect to **Digital Pin 10** on Arduino.




## How It Works

- The Arduino sends a 10µs HIGH pulse to the **Trig** pin to start measurement.
- The sensor emits an ultrasonic burst and waits for it to reflect back.
- The **Echo** pin goes HIGH for a duration corresponding to the time taken by the sound wave to return.
- The Arduino calculates the distance using the formula:  
  $$
  \text{Distance (cm)} = \frac{\text{duration} \times 0.0343}{2}
  $$
  where `duration` is in microseconds.

## Usage Tips

- Ensure all connections are secure.
- Avoid obstacles between the sensor and the target for accurate readings.
- Use the Serial Monitor (baud rate 9600) to view distance measurements.

