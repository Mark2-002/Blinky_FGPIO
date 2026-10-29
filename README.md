# Blinky_FGPIO

A minimal Zephyr RTOS application that configures all GPIO pins on `gpio0` as outputs and toggles them in a loop to create a blinking effect.

## Overview

This project demonstrates direct GPIO control using the Zephyr device APIs. The application:

- Gets the `gpio0` device from the device tree
- Configures 32 GPIO pins as outputs
- Toggles each pin on and off in a loop
- Sleeps for 200 ms between updates

## Files

- `src/main.c` - main application logic
- `CMakeLists.txt` - Zephyr build configuration
- `prj.conf` - enables GPIO support

## Requirements

- Zephyr RTOS environment set up
- CMake 3.20 or newer
- A supported board with a `gpio0` node in the device tree
- `ZEPHYR_BASE` configured if building outside a Zephyr workspace

## Build

From the project root:

```bash
west build -b <board_name> .
```

Replace `<board_name>` with the target board for your hardware, for example:

```bash
west build -b nrf52840dk_nrf52840 .
```

## Flash

```bash
west flash
```

## Notes

This example is intended for experimentation and board testing. It is useful for verifying GPIO output behavior and basic LED/toggle patterns on Zephyr-supported hardware.

## License

This project does not currently declare an explicit license. If you plan to share or distribute it publicly, consider adding one such as MIT or Apache 2.0.
