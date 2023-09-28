#include "main.h"

/**
 * print_binary - a function that Prints the binary representation of a numbe
 * @n: binary string
 * Return: nothing (void)
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /* If the number is greater than 1 */
	/* Recursively call function with num shifted one bit to the right */
	print_binary(n >> 1);

	_putchar((n & 1) + '0');/* Print last bit of num(0 or 1) as a char */
}
