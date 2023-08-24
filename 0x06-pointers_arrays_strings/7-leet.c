#include <stdio.h>
/**
 * leet - a function that encodes a string
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	char *ptr = str;

	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "43071";

	while (*ptr != '\0')
	{
	int i = 0;

	while (leet_chars[i] != '\0')
	{
	if (*ptr == leet_chars[i])
	{
	*ptr = leet_replacements[i];
	break;
	}

	i++;
	}
	ptr++;
	}

	return (str);
}

