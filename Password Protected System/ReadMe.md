# Arduino Password protected Security System

This project demonstrates a simple security system using an Arduino Uno, a 4x4 matrix keypad, two LEDs, and a buzzer. The system allows users to enter a numeric code using the keypad. If the correct code is entered, the green LED lights up; if the wrong code is entered, the red LED lights up and the buzzer sounds.





## Overview

This Arduino-based project is a basic demonstration of a keypad-controlled security system. It uses a 4x4 keypad to input a password, and provides visual (LEDs) and audio (buzzer) feedback based on whether the entered code is correct or not.

## Components Required

- Arduino Uno R3 (1x)
- 4x4 Matrix Keypad (1x)
- Breadboard (1x)
- Red LED (1x)
- Green LED (1x)
- 220Ω Resistors (2x, for LEDs)
- Buzzer (1x)
- Jumper wires

## Circuit Diagram

- **Keypad:** Connect the 8 pins of the keypad to digital pins 2–9 on the Arduino.
- **Red LED:** Connect to a digital pin (e.g., pin 10) through a 220Ω resistor.
- **Green LED:** Connect to a digital pin (e.g., pin 11) through a 220Ω resistor.
- **Buzzer:** Connect to a digital pin (e.g., pin 12).
- **GND:** All component grounds connect to Arduino GND.

## How It Works

1. **Input:** The user enters a code using the keypad.
2. **Verification:** The Arduino checks if the entered code matches the preset password.
3. **Output:**
   - If correct: The green LED lights up.
   - If incorrect: The red LED lights up and the buzzer sounds.

