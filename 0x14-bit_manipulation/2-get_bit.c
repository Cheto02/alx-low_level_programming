#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: value of bit
 * @index: the index
 * Return: bit value
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8) /* Chec is out of range*/
		return (-1);

	mask = 1UL << index; /* Create a mask with the bitspecified index st*/
	if ((n & mask) == 0) /* Check if the bit at specified index is 0 */
		return (0);
	else
		return (1);
}

