## Circuit

This project does not use a custom PCB. Instead, the circuit is documented with:

* an image of the full circuit
* a wiring table showing every connection
* a Cirkit Designer link to the complete circuit design

**Cirkit Designer link:** [Cirkit]([https://app.cirkitdesigner.com/project/98a8d149-222e-4ded-919d-9952a3b7c41c](https://app.cirkitdesigner.com/project/d9f49915-7a48-4d3e-8b84-00cb60f65a8f))

---

## Wiring Table

| From                      | To                             |
| ------------------------- | ------------------------------ |
| **ESC 5V power supply** | **ESP32 VIN**                  |
| **ESC ground**          | **ESP32 GND**                  |
| **Receiver CH2 +**        | **Servo positive**             |
| **Receiver CH2 - / GND**  | **Servo negative**             |
| **Receiver GND**          | **ESP32 GND**                  |
| **Receiver CH1 signal**   | **ESP32 D32**                  |
| **Receiver CH2 signal**   | **ESP32 D33**                  |
| **ESP32 D21**             | **Servo signal wire**          |
| **ESP32 D18**             | **ESC signal wire**          |
| **Main battery +**        | **ESC positive power cable** |
| **Main battery -**        | **ESC negative power cable** |
