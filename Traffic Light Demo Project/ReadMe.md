# Traffic Light Demo Project

## Overview

This project demonstrates a simple traffic light system using an Arduino Uno, LEDs, and a breadboard. The circuit simulates how traffic lights operate, making it an excellent educational tool for learning about basic electronics and Arduino programming.

## Components Used

- Arduino Uno board
- Breadboard
- 3 LEDs (Red, Yellow, Green)
- 3 Resistors (220Ω or 330Ω)
- Pushbutton
- Jumper wires
- USB cable for power

## Circuit Diagram

Below is a visual representation of the traffic light circuit:

🚦

- **Red LED:** Connected to digital pin 13
- **Yellow LED:** Connected to digital pin 12
- **Green LED:** Connected to digital pin 11
- **Pushbutton:** Used to simulate a pedestrian request or reset

## How It Works

1. **Red LED ON:** Indicates stop.
2. **Yellow LED ON:** Indicates prepare to go/stop.
3. **Green LED ON:** Indicates go.
4. **Pushbutton:** Can be programmed to change light sequence or simulate pedestrian crossing.

The Arduino controls the LEDs in sequence, mimicking a real traffic light system.

## Usage Instructions

1. **Connect the components** as shown in the diagram.
2. **Upload the Arduino code** (see below) to your Uno board.
3. **Power the Arduino** using a USB cable.
4. **Press the pushbutton** to cycle through the traffic light sequence.

