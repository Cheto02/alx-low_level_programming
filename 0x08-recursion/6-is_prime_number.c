#include "main.h"
/**
 * is_prime_helper- a function that check whether a number is prime
 * @n: number to evaluate
 * @divisor: checking for divisibility
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
		return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number- a function that returns 1 if the input integer is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
		return (is_prime_helper(n, n - 1));
}




