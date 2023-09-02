#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument param
 * @argv: argument vector
 *
 * Return: 1
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j]; j++)
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
		{
		printf("Error\n");
		return (1);
		}
	}
	sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
}

