#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function
 * @opcodes: Array of opcodes to print
 * @count: Number of opcodes to print
 */
void print_opcodes(unsigned char *opcodes, int count)
{
    int i;  // Declare the loop variable outside of the loop

    for (i = 0; i < count; i++)
    {
        printf("%02x", opcodes[i]);
        if (i < count - 1)
            printf(" ");
    }

    printf("\n");
}

int main(void)
{
    // Define the opcodes based on the provided assembly code
    unsigned char main_opcodes[] = {
        0x55, 0x48, 0x89, 0xe5, 0x48, 0x83, 0xec, 0x30,
        0x89, 0x7d, 0xdc, 0x48, 0x89, 0x75, 0xd0, 0x83,
        0x7d, 0xdc, 0x02, 0x74, 0x14
    };

    int opcode_count = sizeof(main_opcodes) / sizeof(main_opcodes[0]);

    // Print the opcodes in the requested format
    print_opcodes(main_opcodes, opcode_count);

    return 0;
}

