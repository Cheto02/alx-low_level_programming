#include "main.h"
#include <stdio.h>
/**
*clear_bit - sets the value of a bit to 0 at a given index
*@index: index to swap
*@n: value
*
*Return: 1 on success
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	/* check if index is valid */
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	/* create a mask with a 0 bit at the given index */
	mask = ~(1UL << index);

	/* use bitwise AND to clear the bit */
	*n &= mask;

	/* return success */
	return (1);
}
