# Light Detection Alarm using Arduino

## Overview
This project uses an LDR (Light Dependent Resistor) to detect light intensity.  
When the environment becomes dark, a buzzer alarm is triggered.

## Components Used
- Arduino Uno
- LDR (Light Dependent Resistor)
- 10kΩ Resistor
- Piezo Buzzer
- Breadboard
- Jumper Wires

## Working Principle
The LDR forms a voltage divider with a resistor.  
Arduino reads the analog voltage from the LDR using `analogRead()`.

If the light level drops below a threshold value, the Arduino activates the buzzer to signal darkness.

## Pin Configuration
- LDR → A1
- Buzzer → Pin 6

## Code
The Arduino continuously reads the light value and compares it with a threshold.

If the value is below the threshold, the buzzer turns on in a pulsing pattern.

## Simulation
Built and tested using Tinkercad.
simulation link: https://www.tinkercad.com/things/7jt7f8Ewb0t/editel?returnTo=%2Fdashboard
