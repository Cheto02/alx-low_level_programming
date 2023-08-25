#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * infinite_add: a function that adds two numbers.
 * @n1: first number
 * @n2:second number
 * @r: buffer used to store the result
 * @size_r: size of the buffer
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length_n1 = strlen(n1);
	int length_n2 = strlen(n2);
	int carry = 0;

	if (length_n1 > size_r || length_n2 > size_r)
	return (0);

	int i = length_n1 - 1;
	int j = length_n2 - 1;
	int k = size_r - 1;

	while (i >= 0 || j >= 0 || carry != 0)
	{
	int num1 = (i >= 0) ? n1[i] - '0' : 0;
	int num2 = (j >= 0) ? n2[j] - '0' : 0;
	int sum = num1 + num2 + carry;

	carry = sum / 10;
	int digit = sum % 10;

	r[k] = digit + '0';
	i--;
	j--;
	k--;
	}
	r[size_r] = '\0';
	return (r);
	}

	int main(void)
	{
	char n1[100] = "123456789";
	char n2[100] = "987654321";
	char result[100];

	char *sum = infinite_add(n1, n2, result, sizeof(result));

	if (sum == 0)
	printf("Result cannot be stored in buffer\n");
	else
	printf("Sum: %s\n", sum);
	return (0);
}

