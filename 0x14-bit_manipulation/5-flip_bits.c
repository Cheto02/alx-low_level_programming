#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits to flip to get frm one nm to another
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* find the XOR of n and m */
	unsigned long int xor = n ^ m;

	/* count the number of set bits in xor */
	unsigned int count = 0;

	while (xor)
	{
		xor = xor & (xor - 1); /* clear the least significant bit */
		count++; /* increment the count */
	}

	/* return the count */
	return (count);
}

