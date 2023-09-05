#include "main.h"
/**
 * create_array- a function that creates an array of chars
 * @array- array of chars
 * @size: array size
 * @c: character to initialize array with
 *
 * Return:  pointer to the array on success, or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}

