# I2C_Communication_using_Arduino

This repository contains an Arduino project showcasing master-slave communication using the I2C protocol. With this setup, a master Arduino can send targeted commands to multiple slave Arduinos, each with a unique address, allowing for organized and selective communication across multiple devices. Here, each arduino can switch from master to slave based on whether it is sending or receiving a message. This code serves as a foundation for various multi-device applications like lighting control, environmental monitoring, and distributed robotics.

## Features

- **Master-Slave Communication**: Efficient communication between one master and multiple slave Arduinos using the I2C protocol.
- **Selective Command Transmission**: The master Arduino transmits specific commands to chosen slave devices based on user input.
- **Flexible Applications**: Ideal for projects that involve multi-zone control, monitoring systems, or data collection across multiple nodes.

## Applications

This code can be adapted for a range of projects, such as:
- **Multi-Zone Lighting Control**: Control lighting in different zones from a central Arduino.
- **Environmental Monitoring**: Collect temperature, humidity, or other sensor data from multiple locations.
- **Home Automation**: Control appliances or devices in multiple rooms through a master controller.
- **Distributed Robotics**: Use multiple Arduinos to control different parts of a robotic system.
- **Irrigation System**: Manage watering schedules in different zones of a garden or farm.

## Getting Started

### Prerequisites

- Arduino IDE installed on your computer
- At least one master Arduino and multiple slave Arduinos
- I2C wiring setup between the master and slave devices

### Setup

1. Clone this repository to your local machine.
2. Open the code in the Arduino IDE.
3. Upload the code to each Arduino, designating one as the master and the others as slaves.
4. Connect the Arduinos via I2C (SDA and SCL pins).
5. Connect the GND pins together.
6. Open the Serial Monitor to send commands from the master and observe responses.

### Usage

- **Master Commands**: Send commands via the Serial Monitor to control specific slave Arduinos. Each command should include the slave’s I2C address and the action
- **Slave Responses**: Each slave Arduino can send back data or status updates to the master based on the command it receives.

## Code Overview

- **Master Arduino**: Reads commands from the Serial Monitor and sends messages to designated slave addresses.
- **Slave Arduino**: Receives commands from the master and performs actions or sends data back based on the received command.
