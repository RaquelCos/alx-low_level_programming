#include <stdlib.h>
#include "main.h"

/**
 * init_dog - Initializes a var of type struct dog
 * @d: pointer to struct dog to  initialize
 * @name: Nme to initalize
 * @age: Age to initalize
 * @owner: Owner to initalize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
