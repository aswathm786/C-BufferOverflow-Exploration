# Buffer Overflow Vulnerability Demonstration (C)

This repository contains a simple C code snippet demonstrating a buffer overflow vulnerability. The code showcases how exceeding the allocated buffer size can lead to memory corruption and potential security risks.

**DISCLAIMER: This code is deliberately vulnerable and should only be used for educational purposes. Do NOT use it in any production environment. Use it responsibly and ethically.**

## Purpose

The code snippet aims to illustrate the consequences of buffer overflow by:

- Taking user input and storing it in a fixed-size buffer (`buffer[10]`).
- Demonstrating the vulnerability by using `strcpy` to copy a string larger than the buffer size into `buffer`, causing memory corruption.

## Features

- Receives user input and displays the entered string and its length.
- Shows a deliberate attempt to copy a string larger than the buffer size into the allocated memory.

## Usage

1. Clone the repository:

   ```bash
   git clone https://github.com/aswathm786/C-BufferOverflow-Exploration.git
