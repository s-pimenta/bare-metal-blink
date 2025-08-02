#include "pico/stdlib.h"
int main() {
    *(volatile uint32_t*)0x400140cc = 0x5; // GPIO 25 ctrl (SIO function)
    *(volatile uint32_t*)0xd0000020 = 0x2000000; // Enable output on GPIO 25
    while (1) {
        sleep_ms(1000); // pause 1 second
        *(volatile uint32_t*)0xd0000014 = 0x2000000;  // Set high
        sleep_ms(1000); // pause 1 second
        *(volatile uint32_t*)0xd0000018 = 0x2000000;  // Set low
    }   
}