# Arduino Counter with 20x4 LCD Display

## 👉 Overview
This project is a simple counter using an **Arduino UNO**, a **20x4 I2C LCD display**, and two push buttons. The counter value is displayed on the LCD, and the buttons allow users to increment or decrement the count.

## 👉 Features
- Uses an **Arduino UNO** as the main controller.
- Displays the counter value on a **20x4 LCD screen** with **I2C communication**.
- **Red Button**: Increases the count by **1**.
- **Green Button**: Decreases the count by **1**.
- **Debounce logic** to prevent multiple counts from a single press.
- Power-efficient design using internal pull-up resistors for button inputs.

## 👉 Components Used
| Component          | Specification    |
|-------------------|----------------|
| Arduino UNO      | Microcontroller Board |
| 20x4 LCD Display | I2C-based LCD Module |
| I2C Module       | PCF8574 I2C Module |
| Push Buttons     | Momentary Push Buttons (x2) |
| Resistors        | 10kΩ (if needed externally) |
| Jumper Wires     | Male-to-Male, Male-to-Female |
| Breadboard       | For easy wiring |

## 👉 Circuit Diagram:

![Screenshot 2025-02-13 210033](https://github.com/user-attachments/assets/dd6a9487-5958-4417-a609-2347a2334f5f)

## 👉 Wiring Diagram
- **LCD I2C Module**:
  - VCC → 5V (Arduino UNO)
  - GND → GND (Arduino UNO)
  - SDA → A4 (Arduino UNO)
  - SCL → A5 (Arduino UNO)
- **Push Buttons**:
  - Increment Button → Pin 6 (Arduino UNO) **(Internal Pull-up Enabled)**
  - Decrement Button → Pin 7 (Arduino UNO) **(Internal Pull-up Enabled)**

#### 📌 Note: LED is Optional.

## 👉 How It Works
1. The LCD initializes and displays "Counter: 0" at startup.
2. Pressing the **red button** increases the count by **1**.
3. Pressing the **green button** decreases the count by **1**.
4. The updated counter value is displayed on the LCD in real time.
5. A software debounce mechanism prevents unintended multiple increments/decrements.

## 👉 Installation & Usage
1. Clone this repository or download the code.
2. Connect the components as per the wiring diagram.
3. Upload the Arduino sketch to the **Arduino UNO** using the **Arduino IDE**.
4. Observe the counter on the **LCD display** and use the buttons to modify the count.

## 👉 Dependencies
Ensure you have the following libraries installed in the **Arduino IDE**:
- `Wire.h` (Built-in for I2C Communication)
- `LiquidCrystal_I2C.h` (For I2C LCD control)

## 👉 Future Improvements
- Add EEPROM storage to retain the count after power loss.
- Implement an OLED display version for compact designs.
- Add a reset button to reset the counter to zero.

## 👉 License
This project is open-source and available under the **MIT License**. Feel free to use and modify it.

---
For any issues or contributions, feel free to open an **issue** or **pull request** on GitHub!
