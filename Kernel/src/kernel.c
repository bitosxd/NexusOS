// were am I? wait... this is the code that defines the "Write" function? AM I IN A KERNEL???????
// im... beating all the limits, first the kernel mod, and now... MY OWN KERNEL YAY!

// Code by Byt3z :3

#include <stdint.h>
#include "Modules/Video.h"

#define VGA_WIDTH 80
#define VGA_HEIGHT 25
#define VGA_MEMORY 0xB8000

uint16_t* terminal_buffer = (uint16_t*)VGA_MEMORY;
int terminal_row = 0;
int terminal_col = 0;
uint8_t terminal_color = 0x07; // cinza no preto

void kernel_main() {
    terminal_color = vga_entry_color(0x0F, 0x00); // White on black, like... any command-based kernel LMAO
    Clear();

    Writeline("Hello, world! :3");
    WriteAt("For testing purposes only, build 1", 10, 5, vga_entry_color(0x0F, 0x00));
    
    for(;;);
}
