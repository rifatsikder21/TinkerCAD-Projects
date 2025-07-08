# Interfacing 16x2 LCD Display with ATTINY85

r

## Components Required

- ATTINY85 microcontroller
- 16x2 LCD display (parallel interface)
- 10k potentiometer (for LCD contrast)
- 1k resistor (for LCD backlight)
- Breadboard and jumper wires
- Power supply (e.g., 3xAA batteries)

## Circuit Diagram

| LCD Pin | Connects To           | ATTINY85 Pin |
|---------|-----------------------|--------------|
| VSS     | GND                   | —            |
| VDD     | +5V                   | —            |
| V0      | Potentiometer wiper   | —            |
| RS      | PB1                   | Pin 6        |
| RW      | GND                   | —            |
| E       | PB0                   | Pin 5        |
| D4      | PB3                   | Pin 2        |
| D5      | PB4                   | Pin 3        |
| D6      | PB5                   | Pin 1        |
| D7      | PB2                   | Pin 7        |
| A (LED) | +5V via 1k resistor   | —            |
| K (LED) | GND                   | —            |

- Connect the potentiometer ends to VCC and GND; wiper to V0 (LCD contrast).
- Connect the LCD backlight anode (A) to VCC through a 1k resistor, and cathode (K) to GND[1].

## Wiring Instructions

1. **Power:** Connect ATTINY85 VCC and GND to the breadboard power rails.
2. **LCD Power:** Connect LCD VDD to +5V, VSS and RW to GND.
3. **Contrast:** Connect potentiometer ends to +5V and GND, wiper to LCD V0.
4. **Data Lines:** Connect ATTINY85 PB1 to RS, PB0 to E, PB3 to D4, PB4 to D5, PB5 to D6, PB2 to D7.
5. **Backlight:** Connect LCD A to +5V via 1k resistor, K to GND.
6. **Double-check all connections before powering up.**



## How It Works

- The ATTINY85 sends commands and data to the LCD using digital I/O pins.
- The LCD displays text as programmed in the sketch.
- The potentiometer allows you to adjust the contrast for optimal readability[1].

