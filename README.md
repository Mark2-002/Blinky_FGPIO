# Blinky_FGPIO

A minimal Zephyr RTOS application that configures all GPIO pins on `gpio0` as outputs and toggles them in a loop to create a blinking effect.

## Overview

This project demonstrates direct GPIO control using the Zephyr device APIs. The application:

- Gets the `gpio0` device from the device tree
- Configures 32 GPIO pins as outputs
- Toggles each pin on and off in a loop
- Sleeps for 200 ms between updates

## Notes

This example is intended for experimentation and board testing. It is useful for verifying GPIO output behavior and basic LED/toggle patterns on Zephyr-supported hardware.

