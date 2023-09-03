#include "main.h"
int _putchar(char c);

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else if (n == 0 || n == 1)
	return (n);
	else
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - a function that recursively finds the square root
 * @n: number to calculate the square root of.
 * @guess: random number
 *
 * Return: -1
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	return (guess);
	else if (guess * guess > n)
	return (-1);
	else
	return (find_sqrt(n, guess + 1));
}
