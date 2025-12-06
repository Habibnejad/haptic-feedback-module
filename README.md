# haptic-feedback-module

Implement haptic feedback algorithms to enhance steering feel in EPS systems.

## Overview
This repository includes a sample C program that demonstrates how haptic feedback can be implemented in electric power steering systems. The example simulates torque pulses when the steering torque exceeds a predefined threshold to provide tactile feedback to the driver.

## Features
- Monitors steering torque and generates haptic pulses when thresholds are exceeded.
- Demonstrates how basic haptic feedback can be integrated into EPS control code.
- Serves as a starting point for more sophisticated haptic feedback strategies.

## Getting Started
1. Compile the `main.c` file with a C compiler such as gcc:
    ```bash
    gcc -o haptic_feedback_module main.c
    ```
2. Run the compiled program:
    ```bash
    ./haptic_feedback_module
    ```
The program will simulate steering torque samples and output when haptic pulses are triggered based on the torque threshold.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
