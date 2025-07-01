/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
const struct device *gpio_dev = DEVICE_DT_GET(DT_NODELABEL(gpio0));

int main(void)
{
while (1)
{
	for (int i = 0; i < 32;i++)
		{gpio_pin_configure(gpio_dev, i, GPIO_OUTPUT);
	gpio_pin_toggle(gpio_dev, i);}
	k_msleep(200);
}
return 0;
}
