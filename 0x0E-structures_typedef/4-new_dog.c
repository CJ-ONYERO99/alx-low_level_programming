#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0;
	int i;
	dog_t *new_dog;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	for (i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
