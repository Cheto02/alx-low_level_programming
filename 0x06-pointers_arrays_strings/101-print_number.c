#include <stdio.h>
/**
 * print_number - a function that prints an integer.
 * @n: integer
 * @putchar: print current digit
 * Return: integer
 */


void print_number(int n)
{
	if (n < 0)
	{
	putchar('-');
	n = -n;
	}

	if (n / 10 != 0)
	{
	print_number(n / 10);
	}

	putchar('0' + n % 10);
}

