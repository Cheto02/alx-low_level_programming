#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to be used
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8)) /* Check if the index is valid */
	return (-1); /* If not, return -1 */

	*n &= ~(1 << index); /* Clear the bit at the index */

	return (1); /* Return 1 to indicate success */
}
