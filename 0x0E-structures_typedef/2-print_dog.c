#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog
 *
 * Description: Prints the name, age, and owner of the dog.
 * If an element of the dog is NULL, it prints (nil) instead.
 * If d is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
