#include <stddef.h>
/**
 * _strncpy- a function that copies a string.
 * @n: input
 * @dest: char pointer
 * @src: char pointer
 * Return: 0
 */

char *_strncpy(char *dest, const char *src, int n)
{
	char *dest_start = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	for (; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest_start);
}

