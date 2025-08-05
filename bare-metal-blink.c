#include "pico/stdlib.h"
int main() {
    *(volatile uint32_t*)0x400140cc = 0x5; // GPIO 25 ctrl (SIO function)
    *(volatile uint32_t*)0xd0000020 = 0x2000000; // Enable output on GPIO 25
    while (1) { //loop forever
        sleep_ms(1000); // pause 1 second
        *(volatile uint32_t*)0xd000001c = 0x2000000;  // Toggle LED
    }   
}