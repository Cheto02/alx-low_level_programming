#include <ctype.h>
/**
 * cap_string-  a function that takes a string as input and capitalizes all the
 * words in the string
 * @str: string input
 * Return: capitalized string
 */

char *cap_string(char *str)
{

	int i = 1;

	if (str[0] != '\0' && islower(str[0]))
	{
	str[0] = toupper(str[0]);
	}

	while (str[i] != '\0')
	{
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == ',' || str[i] == ';' ||
	str[i] == '.' || str[i] == '!' || str[i] == '?' ||
	str[i] == '"' || str[i] == '(' ||
	str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
	if (str[i + 1] != '\0' && islower(str[i + 1]))
	{
		str[i + 1] = toupper(str[i + 1]);
	}
	}

	i++;
	}

	return (str);
}

