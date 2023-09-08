#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int len1, len2, i, j;
	char *num1, *num2, *result;

	if (argc != 3)
		return (printf("Error\n"), 98);
	num1 = argv[1], num2 = argv[2];
	len1 = strlen(num1), len2 = strlen(num2);
	for (i = 0; i < len1; i++)
	if (num1[i] < '0' || num1[i] > '9')
		return (printf("Error\n"), 98);
	for (i = 0; i < len2; i++)
	if (num2[i] < '0' || num2[i] > '9')
		return (printf("Error\n"), 98);
	result = calloc(len1 + len2 + 1, sizeof(char));
	if (!result)
		return (98);
	for (i = len1 - 1; i >= 0; i--)
	for (j = len2 - 1; j >= 0; j--)
	result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
	for (i = len1 + len2 - 1; i > 0; i--)
	{
	result[i - 1] += result[i] / 10;
	result[i] %= 10;
	}
	for (i = 0; i < len1 + len2 && result[i] == 0; i++)
	if (i == len1 + len2)
	_putchar('0');
	else
	for (; i < len1 + len2; i++)
	_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
	return (0);
}

