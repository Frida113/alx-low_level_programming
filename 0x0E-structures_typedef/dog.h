#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: structure called "dog" that stores a dog's
 * name, age, and owner's name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* initialize dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
