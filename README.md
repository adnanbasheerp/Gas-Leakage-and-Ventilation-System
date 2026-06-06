# AEROSAFE – Arduino Based Gas Leakage and Ventilation System

## Overview

AEROSAFE is an Arduino-based gas leakage detection and automated ventilation system designed to improve safety in residential and small industrial environments.

The system continuously monitors the environment using multiple sensors and automatically activates ventilation when a gas leak is detected. In addition to gas detection, it also monitors temperature, ambient light conditions, and human presence for intelligent environmental monitoring.

## Features

* Real-time gas leakage detection using MQ-5 sensor
* Automatic ventilation activation during gas leaks
* Temperature and humidity monitoring using DHT11
* Human presence detection using PIR sensor
* Day/Night detection using LDR sensor
* Continuous real-time monitoring through Arduino Serial Monitor
* Low-cost and energy-efficient design

## Components Used

* Arduino UNO
* MQ-5 Gas Sensor
* DHT11 Temperature & Humidity Sensor
* PIR Motion Sensor
* LDR (Light Dependent Resistor)
* Ventilation Fan / Exhaust Fan
* 5V Power Supply

## Working Principle

1. MQ-5 continuously monitors combustible gas levels.
2. DHT11 measures temperature and humidity.
3. PIR sensor detects human movement.
4. LDR determines ambient light conditions.
5. Arduino processes all sensor inputs in real time.
6. When gas concentration exceeds the safety threshold:

   * Gas leak alert is triggered.
   * Ventilation fan is activated automatically.
7. The system continues monitoring until gas levels return to safe conditions.

## Applications

* Homes and Kitchens
* Laboratories
* Small Industries
* Educational Demonstrations
* Safety Monitoring Systems

## Advantages

* Affordable and easy to build
* Automatic response to gas leaks
* Multi-sensor environmental monitoring
* Low power consumption
* No manual intervention required

## Future Improvements

* GSM/Wi-Fi based remote alerts
* Mobile application integration
* Automatic gas shut-off mechanism
* Multi-gas monitoring support
* Cloud-based monitoring dashboard

## Team Members

* Akash Verghese Paul
* Agna Antony
* Adnan Basheer P
* Gayathri M
* Hima Mariyam Kurien

## Internship

Developed as a Mini Project during the IoT & Embedded Systems Internship conducted at Nest Digital.

## Repository Structure

```
AEROSAFE
├── Code
│   └── AEROSAFE.ino
├── Report
│   └── Mini_Project_Report.pdf
├── PPT
│   └── Presentation.pptx
├── Images
│   ├── Circuit_Diagram.png
│   └── Project_Photos.jpg
└── README.md
```
