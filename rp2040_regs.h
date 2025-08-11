#ifndef RP2040_REGS_H //checks if RP2040_REGS_H has already been defined
#define RP2040_REGS_H //If not, define it now

    // write all #define macros inside here

    // Base addresses RP2040
    #define IO_BANK0_BASE_REG 0x40014000
    #define SIO_BASE_REG      0xd0000000

    #define GPIO25_CTRL (IO_BANK0_BASE_REG + 0x0cc) //GPIO25 control register
    #define SIO_GPIO_OE   (SIO_BASE_REG + 0x020) //Output enable
    #define SIO_GPIO_OUT_XOR (SIO_BASE_REG + 0x01c) //Toggle GPIO pin
    
    
    #define GPIO_FUNCSEL_SIO 5 // GPIO function select to SIO

    #define GPIO25 (1 << 25) // Set the 25th bit to 1

#endif //End of if

// Don't write anything here