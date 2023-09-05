#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (i = 0; s1[i]; i++)
	len1++;
	for (i = 0; s2[i]; i++)
	len2++;

	new_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
	return (NULL);

	for (i = 0; s1[i]; i++)
	new_str[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
	new_str[i] = s2[j];

	new_str[len1 + len2] = '\0';

	return (new_str);
}

