#include <stdio.h>
#include "main.h"
/**
 *_puts - This function prints a string, followed by a new line, to stdout.
 *@str: string to print
 */

void _puts(char *str)
{
 /* This function prints a string, followed by a new line, to stdout. */
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}
	putchar('\n');
}
