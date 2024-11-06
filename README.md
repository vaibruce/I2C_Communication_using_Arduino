# I2C_Communication_using_Arduino

This repository contains an Arduino project showcasing master-slave communication using the I2C protocol. With this setup, a master Arduino can send targeted commands to multiple slave Arduinos, each with a unique address, allowing for organized and selective communication across multiple devices. Here, each arduino can switch from master to slave based on whether it is sending or receiving a message. This code serves as a foundation for various multi-device applications like lighting control, environmental monitoring, and distributed robotics.

## Table of Contents

- [Features](#features)
- [Applications](#applications)
- [Code Descriptions](#code-descriptions)
- [Schematic](#schematic)
- [Setting Up the Project](#setting-up-the-project)
- [Usage](#usage)

## Features

- **Master-Slave Communication**: Efficient communication between one master and multiple slave Arduinos using the I2C protocol.
- **Selective Command Transmission**: The master Arduino transmits specific commands to chosen slave devices based on user input.
- **Flexible Applications**: Ideal for projects that involve multi-zone control, monitoring systems, or data collection across multiple nodes.

## Applications

These codes can be adapted for a range of projects, such as:
- **Multi-Zone Lighting Control**: Control lighting in different zones from a central Arduino.
- **Environmental Monitoring**: Collect temperature, humidity, or other sensor data from multiple locations.
- **Home Automation**: Control appliances or devices in multiple rooms through a master controller.
- **Distributed Robotics**: Use multiple Arduinos to control different parts of a robotic system.
- **Irrigation System**: Manage watering schedules in different zones of a garden or farm.

  ## Code Descriptions

- **I2C_Broadcast**: This code enables the master Arduino to send a message to all connected slave Arduinos simultaneously, allowing for system-wide commands, such as activating all devices or triggering a system reset.
  
- **I2C_Selective_Transmission**: This code allows the master Arduino to send commands only to specified slave Arduinos. Using selective addressing, the master targets individual or specific slaves based on user input, making it ideal for systems requiring zone-specific control or data collection.
  
-  **I2C_Combined**: This code is a combination of the above two code. It enables the master arduino to send a message to specified slave Arduinos as well as only to all connected slave Arduinos simultaneously, based on the users input.

## Schematic
![image](https://github.com/user-attachments/assets/ff77d04a-b6a3-4fe1-b8b6-5358f5cf5f2e)

## Setting up the project

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
  

