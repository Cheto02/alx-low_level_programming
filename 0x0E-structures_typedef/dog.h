#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <string.h>
/**
 * struct dog- structure type representing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This struct represents a dog and contains information
 * about its name, age, and owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */

