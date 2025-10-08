# 💧 Smart Water Level Indicator

This project measures the water level in a tank using an ultrasonic sensor.  
When the water level crosses a threshold, it triggers an alarm and LED notification.

---

## ⚙️ Components
| Component | Description |
|------------|-------------|
| ESP8266 | Microcontroller |
| HC-SR04 Ultrasonic | Distance measurement |
| Buzzer | Audible alert |
| LED | Visual indicator |

---

## 🧠 Working
- The HC-SR04 measures the distance between the sensor and the water surface.  
- The ESP8266 calculates the level based on distance.  
- When water is near the top, LED and buzzer turn ON.  

---

## 🔌 Connections
| ESP8266 Pin | Connected To |
|--------------|--------------|
| D5 | TRIG |
| D6 | ECHO |
| D7 | Buzzer |
| D8 | LED |

---

## 💻 Steps to Use
1. Upload the `waterlevel.ino` file.  
2. Open Serial Monitor to view distance readings.  
3. Adjust the threshold based on tank depth.

---

## 🌟 Features
- Automatic water level alert  
- No contact with water  
- Works on DC power supply  

---

## 🔮 Future Improvements
- Display water level on OLED screen  
- Add WiFi-based alert system  

---

**Developer — NodeNexus (Vaishnav Balpande)**
