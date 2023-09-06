#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	/*  a loop to change the first n bytes of the memory block
	 *  pointed to by s to the value of b
	 *
	 *  The loop continues as long as the value of n is greater than 0.
	 *  In each iteration of the loop:
	 *  The value at the memory location pointed to by s + i (i.e.,
	 *  the current position in the memory block) is set to the value b.
	 *  The n variable is decremented by 1
	 *  The i variable is incremented by 1, effectively moving
	 *  to the next byte in the memory block.
	 */
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s); /* returns the changed array with the new value for n bytes */
}

