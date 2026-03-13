# Arduino Reaction Time Game

## Description

This project is a reaction time tester built using an Arduino Uno.
The system waits for a random time and then turns on an LED. The user must press a button as quickly as possible after the LED lights up. The reaction time is measured using the Arduino `millis()` function.

## Components Used

* Arduino Uno
* Push Button
* 4 LEDs
* 4 Resistors (220Ω)
* Breadboard
* Jumper Wires

## Features

* Random delay before the signal
* Reaction time measurement using `millis()`
* LED feedback for reaction speed
* Serial Monitor output displaying reaction time

## How It Works

1. Arduino waits a random delay between 2–5 seconds.
2. The signal LED turns on.
3. The player presses the button as quickly as possible.
4. The reaction time is calculated and printed in the Serial Monitor.
5. LEDs indicate performance:

   * Green → Fast reaction
   * Yellow → Average reaction
   * Red → Slow reaction

## Simulation

Tinkercad link: https://www.tinkercad.com/things/gwjqKDewN89-magnificent-jaiks-uusam/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard
