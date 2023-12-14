#include "main.h"
#include <stdio.h>

/**
 *set_bit - a function to Set the value of a bit to 1 at a given index
 *@index: index
 *@n: value
 *Return: 1 on success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is valid */
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	/* Create a mask with only the index bit set to 1 */
	mask = 1 << index;

	/* Use bitwise OR to set the bit to 1 */
	*n |= mask;

	/* Return 1 on success */
	return (1);
}
