#include <stdlib.h>
#include <string.h>
/**
 *_realloc- a function that reallocates a memory block using malloc and free
 *@ptr:a pointer to the memory previously allocated
 *@old_size:size, in bytes, of the allocated space for ptr
 *@new_size:new size, in bytes of the new memory block
 *Return: Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
	{
	return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
	return (NULL);
	}

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}

