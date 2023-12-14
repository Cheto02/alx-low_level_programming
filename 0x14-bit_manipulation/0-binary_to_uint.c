#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint - Converts a binary number to an unsigned int
 *@b: Pointer to a string of 0 and 1 chars
 *
 *Return: The converted number, or 0 if there is one or
 *chars in the string b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	int i = 0;

	if (b == NULL || *b == '\0')
	return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		i++;
	}
	i = 0;
	while (b[i])
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	return (num);
}

