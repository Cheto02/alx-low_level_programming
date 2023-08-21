#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to print
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}
