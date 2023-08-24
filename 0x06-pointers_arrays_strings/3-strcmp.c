#include <stddef.h>
/**
 * _strcmp - a function that compares two strings
 * @s1: input
 * @s2: input
 * Return: an integer value that indicates the relationship between the
 * two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

