# Interfacing Keypad with Arduino UNO

## Overview

This project demonstrates how to interface a 4x4 matrix keypad with an Arduino UNO. The keypad allows users to input numbers and characters, which can then be read and processed by the Arduino for various applications such as password entry, menu navigation, or custom user input.

## Components Used

- Arduino UNO board
- 4x4 Matrix Keypad (16 keys: 0-9, A-D, *, #)
- Jumper wires
- USB cable for programming and power

## Circuit Diagram

- The 4x4 keypad has 8 pins: 4 for rows and 4 for columns.
- Each pin from the keypad is connected to a separate digital I/O pin on the Arduino UNO.
- The USB cable connects the Arduino to your computer for power and programming.

## Wiring Instructions

1. **Identify the keypad pins:** Usually, the pins are arranged as R1, R2, R3, R4, C1, C2, C3, C4.
2. **Connect keypad to Arduino:** Use jumper wires to connect each keypad pin to a digital pin on the Arduino. For example:

   | Keypad Pin | Arduino Pin |
   |------------|-------------|
   | R1         | D2          |
   | R2         | D3          |
   | R3         | D4          |
   | R4         | D5          |
   | C1         | D6          |
   | C2         | D7          |
   | C3         | D8          |
   | C4         | D9          |

3. **Power the Arduino:** Plug the USB cable into your computer or a suitable power source.





## How It Works

- The Arduino scans the keypad by setting each row and column high or low and checking for button presses.
- When a key is pressed, the corresponding character is detected and can be read in the Arduino code.
- The detected key is printed to the Serial Monitor for verification.

## Applications

- Security systems (password entry)
- Menu navigation for embedded systems
- User input for calculators or custom devices

