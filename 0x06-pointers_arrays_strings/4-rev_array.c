#include <stdio.h>
/**
 * reverse_array- reverses the content of the array.
 * @a: array of integers
 * @n: array size
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}

