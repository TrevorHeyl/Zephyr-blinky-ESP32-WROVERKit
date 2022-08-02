/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <drivers/gpio.h>


#define LEDGR_NODE DT_ALIAS(ledgp1)

static const struct gpio_dt_spec ledgr = GPIO_DT_SPEC_GET(LEDGR_NODE, gpios);


void main(void)
{
	int ret;

	if(!device_is_ready(ledgr.port)) 
	{
		printk("Could not init led Green port");
	}


	ret = gpio_pin_configure_dt(&ledgr, GPIO_OUTPUT_ACTIVE);
	if (ret < 0)
	{
		printk("Green led init failed");
	}

	while(1) {
		gpio_pin_toggle_dt(&ledgr);
		printk("Hello World! %s\n", CONFIG_BOARD);
		k_msleep(1000);
	}
}
