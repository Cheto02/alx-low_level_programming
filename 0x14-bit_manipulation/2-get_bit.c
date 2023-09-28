#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be used
 * @index: index of the bit to get
 *
 * Return: value of the bit, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8)) /* Check if the index is valid */
	return (-1); /* If not, return -1 */
	/* Otherwise, return the value of the bit at the index position */
	return ((n >> index) & 1);
}

