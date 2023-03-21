#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to set
 * @age: age to set
 * @owner: owner to set
 *
 * Description: This function initializes a variable of type struct dog.
 * If d is NULL, it allocates memory for it with malloc.
 * It sets the name, age and owner members of the struct dog pointed by d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

