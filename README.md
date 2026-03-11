# Matrix Keypad Phone Number Display Project

## Overview
This project demonstrates how to interface a matrix keypad with a microcontroller.  
When a key is pressed, its associated number is detected and displayed.  
The program simulates entering a phone number using the keypad.

## Features
- Supports 4x4 matrix keypad input.  
- Detects and prints the pressed key value.  
- Stores multiple digits to form a phone number.  
- Displays the complete phone number after entry.  

## Requirements
- Microcontroller (e.g., STM32, Arduino, or LPC1768).  
- 4x4 matrix keypad.  
- Serial monitor or LCD for output.  

## How It Works
1. User presses a key on the keypad.  
2. The program scans rows and columns to identify the pressed switch.  
3. The corresponding digit is printed on the display.  
4. Digits are concatenated to form a phone number.  

## Usage
- Connect the keypad to GPIO pins as per the circuit diagram.  
- Upload the provided code to the microcontroller.  
- Press keys to enter digits and watch the phone number appear.  

## License
This project is open-source under the MIT License.
