## Uses of ESP32

An ESP32 is a microcontroller that has applications in robotics due to having significant processing power, two cores for multitasking, low power consumption and relative ease of use.

These applications are:
1. Used by hobbyists for projects requiring decent computing power and internet functionality
2. It is used in toy/education drones, as it is fast enough (and has two cores) to handle flight stabilization logic whilst also streaming data over WIFI
3. It has applications in swarm robotics, as it is relatively cheap and can be used to make swarms of drones or ground robots that are all able to communicate with each other

## Role of ESP32 in robotics systems

In hobby projects/simpler applications, they can be entirely used as the brain of a robot. They are commonly used where functionality to transmit data wirelessly and processing power is needed but a computer (like a raspberry pi) wouldn't be applicable.

In more practical/industrial applications, they are more commonly used as edge devices. They are used to handle smaller tasks like reading RFID tags, providing emergency stop functionality and redundancy while more powerful computers handle primary logic.

## ESP-IDF vs Arduino
- ESP-IDF is the official framework provided by the manufacturer of the ESP32 (Espressif). It allows for very fine-grained control of the ESP32 microcontroller.
- The Arduino IDE can be used to program the ESP32, and it acts like a wrapper for the ESP-IDF to let you communicate with the controller.

|                  | ESP-IDF                                                                              | Arduino                                                 |
| ---------------- | ------------------------------------------------------------------------------------ | ------------------------------------------------------- |
| Ease of learning | Requires technical knowledge                                                         | Easy                                                    |
| Usecase          | Industrial/Professional applications                                                 | Hobby/Personal project development                      |
| Control offered  | Much more low-level control offered - you can change clock speed, wifi settings etc. | Average control                                         |
| Support          | Official support from Espressif                                                      | Monitored and supported, but ESP-IDF use is recommended |
| Usage            | Through an external IDE plugin                                                       | Through the Arduino IDE                                 |

#### Sources
1. https://milanachintha.medium.com/arduino-ide-vs-esp-idf-choosing-the-right-framework-for-esp32-development-14f2233ea45c
2. https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/index.html