//
// gp-pico-blink
// Copyright © 2024, Greg PFISTER. Fair Core License, Version 1.0, MIT Future License
//

#include "global.h"
#include "led.h"

// #include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"

int main()
{
    int ret = 0; // Return code

    // Initialize led
    ret = pico_led_init();
    hard_assert(ret == PICO_OK);

    // Initialize output
    // ret = stdio_init_all();
    // hard_assert(ret == PICO_OK);

    // Main loop
    const uint32_t currentMS = to_ms_since_boot(get_absolute_time());
    while (ret == 0) {
        // printf("Blink !");
        pico_set_led(true);
        sleep_ms(LED_BLINK_DURATION_MS);

        pico_set_led(false);
        sleep_ms(LED_DELAY_MS);

        ret = (to_ms_since_boot(get_absolute_time()) - currentMS) > 60000;
    }

    return ret;
}
