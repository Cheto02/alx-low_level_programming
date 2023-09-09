#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i, j;

	/* treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)/* calculate the length of s1 and s2*/
	for (len2 = 0; s2[len2]; len2++)

	/* if n >= len2, use the entire string s2 */
	if (n >= len2)
		n = len2;

	/* allocate memory for the new string */
	p = malloc(len1 + n + 1);
	if (p == NULL)
	return (NULL);

	/* copy s1 and the first n bytes of s2 into the new string */
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		p[i] = s2[j];

	/* null terminate the new string */
		p[i] = '\0';

	return (p);
}

