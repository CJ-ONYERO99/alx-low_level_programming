#include "dog.h"
#include <stddef.h> /* For NULL definition */

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
