# Serial LED Controller (Arduino)

## Overview
This project allows the user to control which LED turns on by typing a color in the Serial Monitor.

The Arduino reads the user's input through serial communication and turns on the corresponding LED.

Example inputs:
- red
- green
- blue

When the user enters one of these colors, the matching LED turns on while the others turn off.

## Components Used
- Arduino Uno
- 3 LEDs
- 3 current-limiting resistors
- Breadboard
- Jumper wires

## Pin Configuration
- Red LED → Pin 12  
- Green LED → Pin 11  
- Blue LED → Pin 10  

## How It Works
1. The Arduino asks the user which LED color to turn on.
2. The user types a color in the Serial Monitor.
3. The Arduino reads the input using serial communication.
4. The program checks the color using conditional statements.
5. The corresponding LED turns on while the others turn off.

## Simulation
This project was tested using Tinkercad.

## Concepts Used
- Serial communication
- User input
- Conditional logic (`if` statements)
- Controlling digital outputs

## Code
The Arduino code for this project is included in this folder.
