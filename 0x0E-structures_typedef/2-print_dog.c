#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints the name, age, and owner of the struct dog.
 * If any of the elements in the struct are NULL, it will print "(nil)"
 * instead of the element.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)/* check to avoid dereferencing a null pointer */
	/**
	 * if d is not NULL, we use a conditional operator to check if
	 * each element of the struct (name and owner) is not NULL.
	 * If it is not NULL, we print the value of the element.
	 * Otherwise, we print "(nil)".
	 */
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
