# Firmware

This folder contains the firmware for the S-Series V4 controller.

The firmware runs on an ESP32 and reads RC receiver input signals for steering and throttle. It then sends control signals to two ESCs and one steering servo.

## Required library

This firmware uses the `ESP32Servo` library.

Install it in the Arduino IDE:

1. Open Arduino IDE
2. Go to **Sketch -> Include Library -> Manage Libraries**
3. Search for `ESP32Servo`
4. Install the library

## Uploading the firmware

1. Open the firmware file in Arduino IDE.
2. Select the ESP32 Dev Module.
3. Select the correct USB port.
4. Install the `ESP32Servo` library if it is not already installed.
5. Click **Upload**.
