#include "pico/stdlib.h"
#include "rp2040_regs.h" //include header file with register names

int main() {
    *(volatile uint32_t*)GPIO25_CTRL = GPIO_FUNCSEL_SIO;// GPIO 25 ctrl (SIO function)
    *(volatile uint32_t*)SIO_GPIO_OE = GPIO25; //Enable output GPIO25
    
    while (1) { //loop forever
        sleep_ms(1000); // pause 1 second
        *(volatile uint32_t*)SIO_GPIO_OUT_XOR = GPIO25; //Toggle LED
    }   
}