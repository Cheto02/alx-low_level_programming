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
	char *p;// pointer to iterate over string accept

	while (*s)// iterate over each character in string s
	{
	p = accept;// reset p to the beginning of string accept
	while (*p)// iterate over each character in string accept
	{
		if (*s == *p)// if the current character in s matches the current
			//character in accept
		return (s);// return a pointer to the current character in s
		p++;// move to the next character in string accept
	}
	s++;// move to the next character in string s
	}
	return (NULL);// return NULL if no match is found
}

