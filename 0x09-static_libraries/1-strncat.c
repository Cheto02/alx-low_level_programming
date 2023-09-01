#include <stddef.h>
/**
 * _strncat - concatenates two strings.
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: input
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (n > 0 && *src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';

	return (dest_start);
}

