#include <ctype.h>
/**
 * string_toupper - convert each lowercase character to uppercase
 * @str: input string
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
	*ptr = toupper(*ptr);
	ptr++;
	}

	return (str);
}
