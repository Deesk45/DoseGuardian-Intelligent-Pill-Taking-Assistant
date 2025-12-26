# DoseGuardian-Intelligent-Pill-Taking-Assistant

# 🩺 DOSE GUARDIAN – Embedded Medicine Reminder System

## 📌 Project Description
**DOSE GUARDIAN** is an embedded systems project developed using the **LPC21xx (ARM7TDMI-S)** microcontroller.  
The system acts as an intelligent **medicine reminder**, allowing the user to configure **time, date, and day** using a keypad and LCD interface.  
When the configured medicine time matches the real-time clock (RTC), the system alerts the user using a **buzzer and LED**.

This project follows **industry-style embedded firmware design**, using modular drivers and clear separation of hardware abstraction and application logic.

---

## ✨ Key Features
- Real-Time Clock (RTC) based timekeeping
- User configurable:
  - Time (Hour / Minute / Second)
  - Date (Date / Month / Year)
  - Day of week
- Arrow-based LCD user interface (UP / DOWN / LEFT / RIGHT)
- Custom LCD characters using CGRAM
- Medicine alert using:
  - Buzzer (audio)
  - LED (visual)
- Keypad-based navigation and confirmation
- Leap year aware date handling
- Input validation (no zero date/month bugs)
- Modular, reusable embedded C code
- Suitable for academic mini-projects and demos

---

## 🧰 Hardware Requirements
| Component | Description |
|---------|-------------|
| Microcontroller | LPC21xx (ARM7TDMI-S) |
| Display | 16×2 LCD (HD44780 compatible) |
| Input | 4×4 Matrix Keypad |
| RTC | Internal LPC21xx RTC |
| Alert Devices | Buzzer, LED |
| Switches | SW1, SW2 |
| Power Supply | 5V regulated |
| Programming | JTAG / Flash Magic |

---

## 💻 Software Requirements
- Keil µVision IDE
- ARM7 LPC21xx toolchain
- Embedded C (C99)
- Flash Magic (for flashing)
- Proteus (optional, for simulation)
- Git (for version control)

---

## 🔌 Pin Configuration

### 5.1 LCD Pin Configuration (8-bit Mode)
| LCD Pin | LPC21xx Pin | Description |
|------|------------|-------------|
| RS | P0.8 | Register Select |
| RW | P0.9 | Read / Write |
| EN | P0.10 | Enable |
| D0–D7 | P0.0 – P0.7 | 8-bit Data Bus |

---

### 5.2 Keypad Pin Configuration
| Keypad Line | LPC21xx Pin | Direction |
|-----------|-------------|-----------|
| Rows (R0–R3) | P1.16 | Output |
| Columns (C0–C3) | P1.23 | Input |

---

### 5.3 RTC Pin Configuration
| Signal | LPC21xx Pin | Description |
|------|-------------|-------------|
| RTC Clock | Internal | On-chip RTC module |
| RTC Battery | VBAT | Backup battery support |

---

### 5.4 Alert Devices
| Device | LPC21xx Pin | Description |
|------|-------------|-------------|
| Buzzer | P1.24 | Medicine alert sound |
| LED | P1.27 | Visual alert indication |

---

### 5.5 Switch Configuration
| Switch | LPC21xx Pin | Description |
|------|-------------|-------------|
| SW1 | P0.20 | User input switch |
| SW2 | P1.25 | User input switch |

---

## 📁 Project Folder Structure

