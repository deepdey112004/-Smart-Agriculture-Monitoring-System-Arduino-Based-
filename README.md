# 🌿 Smart Agriculture Monitoring System (Arduino Based)

A simple yet effective Arduino-based system to monitor temperature, humidity, rain, gas levels, and soil moisture for smart farming applications.

---

## 📌 Description

This project collects real-time environmental data using sensors and displays it through the Serial Monitor. It helps in identifying weather conditions, gas leakage, and soil moisture—essential parameters for smart agriculture.

---

## 🚀 Features

- 🌡️ DHT11 for temperature & humidity sensing  
- 🌧️ Analog rain sensor to detect rainfall  
- 🔥 MQ2 sensor to monitor harmful gases  
- 🌱 Soil moisture sensor to check soil condition  
- 📟 Live Serial Monitor output  
- 📈 Readings update every 3 seconds

---

## 🔧 Circuit Diagram
<img width="412" height="651" alt="image" src="https://github.com/user-attachments/assets/b20997c4-e959-4c21-927f-e66dc563c43d" />
<img width="698" height="645" alt="image" src="https://github.com/user-attachments/assets/1879756a-1965-4019-a08e-0ed1bdce792a" />
<img width="466" height="658" alt="image" src="https://github.com/user-attachments/assets/af8ad28d-9553-4f86-9b41-46f5871ea878" />
---

## 🧾 Components List

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno / Nano     | 1        |
| DHT11 Temperature Sensor | 1      |
| MQ2 Gas Sensor         | 1        |
| Analog Rain Sensor     | 1        |
| Soil Moisture Sensor   | 1        |
| Breadboard + Jumper Wires | As needed |
| Power Source (USB or Battery) | 1  |

---

## 📊 Components Connection Chart

| Component          | VCC        | GND        | Data Pin      |
|-------------------|------------|------------|---------------|
| DHT11 Sensor       | 5V         | GND        | D2            |
| Rain Sensor        | 5V         | GND        | A0 (Analog)   |
| MQ2 Gas Sensor     | 5V         | GND        | A1 (Analog)   |
| Soil Moisture Sensor | 5V       | GND        | A2 (Analog)   |

---

## 📦 Required Library Installation

Install the following library via Arduino IDE Library Manager:

- `DHT sensor library` by Adafruit  
  - Go to **Sketch → Include Library → Manage Libraries…**
  - Search for **"DHT sensor library"** and install it.

---

## 📊 Sample Serial Monitor Output

🌐 Smart Agriculture Monitoring Started...
============== Sensor Data ==============
🌡 Temperature: 28.0 °C
💧 Humidity: 65.0 %
🌧 Rain Status: No Rain
🔥 Gas Level (MQ2): 341
🌱 Soil Moisture: 498 - Soil Wet


---

## 🧠 Future Development Ideas

- 🌐 Web dashboard using ESP32/ESP8266 for remote monitoring  
- 📱 Mobile notification via Blynk / IFTTT  
- ☁️ Cloud data logging using Firebase / Thingspeak  
- 🔔 Add alert system for critical values (buzzer or LED)  
- 💧 Automatic irrigation system based on soil moisture

---

## 📎 License

This project is open-source under the [MIT License](LICENSE).

---

## 🙌 Contributions

Feel free to fork, improve, and create pull requests to make this more efficient and advanced.

---
