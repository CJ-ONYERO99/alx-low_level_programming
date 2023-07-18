#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: First member - Dog's name
 * @age: Second member - Dog's age
 * @owner: Third member - Dog's owner
 *
 * Description: This structure represents basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
