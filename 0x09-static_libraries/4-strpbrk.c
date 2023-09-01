#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept
 * @s: string to search
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
	p = accept;
	while (*p)
	{
		if (*s == *p)
		return (s);
		p++;
	}
	s++;
	}
	return (NULL);
}

