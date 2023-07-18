#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog_t struct
 * @d: Pointer to the struct dog_t
 *
 * Description: Frees the memory allocated for the name, owner, and the struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
