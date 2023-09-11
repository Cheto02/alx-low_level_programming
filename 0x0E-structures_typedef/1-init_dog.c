#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes the members of the struct
 * dog variable with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/**
	 * check if the pointer d is not NULL to avoid dereferencing
	 * a null pointer.
	 * If d is not NULL, we assign the values of name, age, and owner
	 * to the corresponding members of the struct dog using the
	 * arrow operator (->).
	 */
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

