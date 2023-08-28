#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	while (*haystack)
	{
	p1 = haystack;
	p2 = needle;
	while (*p1 && *p2 && *p1 == *p2)
	{
	p1++;
	p2++;
	}
	if (!*p2)
	return (haystack);
	haystack++;
	}
	return (NULL);
}

