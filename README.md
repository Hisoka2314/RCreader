# RCReader Library

A lightweight and easy-to-use Arduino library for reading PWM signals from multiple RC channels, such as those from an RC receiver.

---

## Features
- Reads PWM signals from multiple RC channels simultaneously.
- Provides simple methods to retrieve channel values in microseconds.
- Supports flexible pin assignments and up to 6 channels by default (customizable).

---

## Getting Started

### 1. Installation
#### Option 1: Using the Arduino Library Manager
1. Open the Arduino IDE.
2. Go to **Tools > Manage Libraries...**.
3. Search for "RCReader" and click **Install**.

#### Option 2: Manual Installation
1. Download or clone this repository.
2. Copy the `RCReader` folder into your Arduino libraries directory:
   - **Windows:** `Documents/Arduino/libraries/`
   - **macOS/Linux:** `~/Documents/Arduino/libraries/`
3. Restart the Arduino IDE.

---

### 2. Usage

#### Including the Library
Add the following line at the beginning of your sketch:
```cpp
#include <RCReader.h>
