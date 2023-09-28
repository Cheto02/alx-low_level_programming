#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Calculate the XOR of n and m */
	unsigned long int xor = n ^ m;
	/* Initialize the count of flipped bits to 0 */
	unsigned int count = 0;

	/* While xor is not zero */
	while (xor)
	{
		/* Add the least significant bit of xor to count */
		count += xor & 1;
		/* Right shift xor by 1 */
		xor >>= 1;
	}

	/* Return the count of flipped bits */
	return (count);
}

