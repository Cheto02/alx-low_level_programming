#include "main.h"
#include <stdio.h>

/**
 * main- program entry point
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

int main(void)
{
	char ch = 'A';

	if (_isupper(ch))
	{
	printf("%c is an uppercase character.\n", ch);
	}
	else
	{
	printf("%c is not an uppercase character.\n", ch);
	}
	return (0);
}

