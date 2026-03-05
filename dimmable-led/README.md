# Dimmable LED using Arduino (PWM)

## Overview
This project controls the brightness of an LED using a potentiometer.
The Arduino reads the analog value from the potentiometer and converts it into a PWM signal to adjust LED brightness.

## Components Used
- Arduino Uno
- 1 LED
- 1 Current-limiting resistor (220Ω)
- 1 Potentiometer
- Breadboard
- Jumper wires

## Working Principle
The potentiometer creates a variable voltage between 0V and 5V.
Arduino reads this voltage using `analogRead()`.

The value (0–1023) is converted to a PWM range (0–255) and sent to the LED using `analogWrite()`.

## Pin Configuration
Potentiometer → A1  
LED → Pin 6  

## Simulation
Tinkercad simulation link:  
https://www.tinkercad.com/things/19omkebE7SJ/editel?returnTo=%2Fdashboard
