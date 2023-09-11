#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees memory allocated for a dog_t structure.
 * @d: A pointer to the dog_t structure to be freed.
 *
 * This function checks if the pointer 'd' is not NULL. If it isn't NULL,
 * it frees the memory allocated for the 'name', 'owner', and the
 * structure itself.
 * This ensures that all dynamically allocated memory is properly freed.
 * Remember to call this function when you're done with your dog_t structure.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	/* Check if the pointer is not NULL */
	if (d)
	{
	/* Free the memory allocated for the name */
	free(d->name);
	/* Free the memory allocated for the owner */
	free(d->owner);
	/* Free the memory allocated for the structure itself */
	free(d);
	}
}

