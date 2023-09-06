#include <stdio.h>
#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory where is stored or destination
 * @src: memory where it is copied from or sourced
 * *@n: number of bytes copied from src to dest
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	/*  This loop will copy data n times (as long as r is less than i */
	for (; r < i; r++)
	{
	/**
	 * The value at the memory location pointed to by src + r
	 * (i.e., the current position in the source memory) is assigned
	 * to the memory location pointed to by dest + r (i.e., the current
	 * position in the destination memory). This effectively copies a byte
	 * from src to dest.The n variable is decremented by 1 in
	 * each iteration, indicating that one byte has been copied.
	 */
	dest[r] = src[r];
	n--;
	}
	return (dest);
}

