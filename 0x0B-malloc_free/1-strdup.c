#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to new string or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	len++;

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	return (NULL);

	for (i = 0; str[i]; i++)
	new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);
}

