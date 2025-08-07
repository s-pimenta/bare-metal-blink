#include "pico/stdlib.h"
#define GPIO25 (1u << 25) //GPIO25

int main() {
    *(volatile uint32_t*)0x400140cc = 0x5;// GPIO 25 ctrl (SIO function)
    *(volatile uint32_t*)0xd0000020 = GPIO25; //Enable output GPIO25
    
    while (1) { //loop forever
        sleep_ms(1000); // pause 1 second
        *(volatile uint32_t*)0xd000001c = GPIO25; //Toggle LED
    }   
}