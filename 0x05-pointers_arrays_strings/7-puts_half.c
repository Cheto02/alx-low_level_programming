#include <stdio.h>
#include <string.h>
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int length, n, i;

	length = strlen(str);

	if (length % 2 == 0)
	{
	n = length / 2;
	}
	else
	{
	n = (length - 1) / 2;
	}

	for (i = n; i < length; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
