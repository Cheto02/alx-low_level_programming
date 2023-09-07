#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * mul -  a program that multiplies two positive numbers.
 * @num1:first number to multiply
 * @num2: second number to multiply
 *Return: result of mul
 */
unsigned int mul(unsigned int num1, unsigned int num2)
{
	unsigned int result = num1 * num2;

	return (result);
}
/**
 *main- program entry point
 *@argc: argument count
 *@argv: argument vector
 *Return:98 on error and 0 on success
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, product;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
	printf("Error\n");
	return (98);
	}

	product = mul(num1, num2);
	printf("%u\n", product);

	return (0);
}

