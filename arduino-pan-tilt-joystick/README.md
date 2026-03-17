# 🎮 2-Axis Servo Control System using Potentiometers (Arduino)

## 📌 Overview

This project demonstrates real-time control of two servo motors using potentiometers instead of a joystick. Each potentiometer controls one servo axis, enabling precise 2-axis motion.

Additionally, a push button and piezoelectric buzzer are integrated. When the button is pressed, the buzzer is activated, adding an interactive feedback mechanism.

---

## ⚙️ Components Used

* Arduino Uno
* 2 Servo Motors
* 2 Potentiometers
* Push Button (with internal pull-up configuration)
* Piezoelectric Buzzer
* Breadboard
* Jumper Wires

---

## 🔌 Circuit Diagram

![Circuit Diagram] <img width="1640" height="912" alt="image" src="https://github.com/user-attachments/assets/ff6e7550-19f9-4f0f-8451-0becd91e4cf8" />


---

## 🧠 Working Principle

### 🎛️ Servo Control

* Each potentiometer provides an analog input (0–1023)
* These values are mapped to servo angles (0–180°)
* Each servo moves independently based on its respective potentiometer

### 🔘 Button & Buzzer

* The push button is configured using **INPUT_PULLUP**
* Default state → HIGH
* When pressed → LOW
* On button press, the piezoelectric buzzer is activated

---

## 💡 Concepts Used

* Analog Input (ADC)
* PWM (Servo Control)
* Signal Mapping (0–1023 → 0–180°)
* Digital Input using Internal Pull-up Resistor
* Real-time Embedded Control

---

## 🚀 Features

* Independent control of two servo motors
* Smooth real-time position adjustment
* Interactive buzzer feedback on button press
* Stable input reading using internal pull-up resistor

---

## 📈 Applications

* Pan-tilt mechanisms
* Robotics control systems
* Manual positioning systems
* Embedded control demonstrations

---

## 🔮 Future Improvements

* Add joystick module for compact control
* Implement smooth servo transitions
* Integrate camera for tracking systems
* Combine with Raspberry Pi for computer vision applications
  
my tinkercad link :https://www.tinkercad.com/things/3L7XOpdUEBZ-controllingservousingjoystick-/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard
---

✨ Built as part of an embedded systems learning journey


