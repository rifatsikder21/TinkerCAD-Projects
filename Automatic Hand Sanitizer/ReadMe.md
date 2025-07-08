# Automatic Hand Sanitizer with Arduino UNO



## Components Required

- Arduino UNO board
- HC-SR04 ultrasonic distance sensor
- 5V relay module (for controlling the sanitizer pump)
- Breadboard and jumper wires
- USB cable for Arduino
- Power supply for Arduino and pump
- Sanitizer pump (DC motor or solenoid type)

## Circuit Diagram

Below is a textual description of the wiring, as shown in the reference image:

| Component           | Arduino Pin         | Notes                        |
|---------------------|--------------------|------------------------------|
| HC-SR04 VCC         | 5V                 | Power supply                 |
| HC-SR04 GND         | GND                | Ground                       |
| HC-SR04 Trig        | Digital Pin 9      | Trigger signal               |
| HC-SR04 Echo        | Digital Pin 10     | Echo signal                  |
| Relay Module VCC    | 5V                 | Power supply                 |
| Relay Module GND    | GND                | Ground                       |
| Relay Module Signal | Digital Pin 8      | Controls the relay switch    |

- The relay module output should be connected to the sanitizer pump circuit, allowing the Arduino to control the pump.

## Wiring Instructions

1. **Ultrasonic Sensor:**
   - Connect VCC to Arduino 5V.
   - Connect GND to Arduino GND.
   - Connect Trig to Digital Pin 9.
   - Connect Echo to Digital Pin 10.

2. **Relay Module:**
   - Connect VCC to Arduino 5V.
   - Connect GND to Arduino GND.
   - Connect Signal (IN) to Digital Pin 8.

3. **Sanitizer Pump:**
   - Connect the pump’s positive terminal to relay NO (Normally Open) contact.
   - Connect relay COM (Common) to the pump’s power supply positive.
   - Connect pump’s negative terminal to power supply ground.

4. **Double-check all connections** before powering up the system.




## How It Works

- The **ultrasonic sensor** continuously measures the distance to detect a hand placed under the dispenser.
- When a hand is detected within 10 cm, the Arduino triggers the **relay**, activating the sanitizer pump for a fixed duration.
- After dispensing, the system waits before allowing the next activation to avoid multiple triggers.
