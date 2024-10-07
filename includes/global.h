//
// gp-pico-blink
// Copyright © 2024, Greg PFISTER. Fair Core License, Version 1.0, MIT Future License
//

#ifndef GLOBAL_H
#define GLOBAL_H

// Pico W devices use a GPIO on the WIFI chip for the LED,
// so when building for Pico W, CYW43_WL_GPIO_LED_PIN will be defined
#ifdef CYW43_WL_GPIO_LED_PIN
#include "pico/cyw43_arch.h"
#endif

// Led delay
#define LED_DELAY_MS          900
#define LED_BLINK_DURATION_MS 100

#endif /* GLOBAL_H */
