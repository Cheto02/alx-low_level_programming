#include <stdlib.h>
/**
 *array_range- a function that creates an array of integers.
 *@min: minimum values
 *@max:maximum values
 *
 *Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
	{
	return (NULL);
	}

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	arr[i] = min++;
	}

	return (arr);
}

