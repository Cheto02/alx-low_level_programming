#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
	return (NULL);
	}
	/* Copy the name and owner strings */
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	new_dog->age = age;

	return (new_dog);
}

