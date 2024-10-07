//
// gp-pico-blink
// Copyright © 2024, Greg PFISTER. Fair Core License, Version 1.0, MIT Future License
//

#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

int pico_led_init(void);

void pico_set_led(bool led_on);

#endif /* LED_H */
