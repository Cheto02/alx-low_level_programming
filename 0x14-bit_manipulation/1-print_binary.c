#include "main.h"
#include <stdio.h>
/**
 *print_binary - a function that prints binary representation of a number
 *@n: number to print
 *Return: number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

