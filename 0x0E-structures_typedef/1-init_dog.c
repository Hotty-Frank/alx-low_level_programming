#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variables of of type stuct dog.
 * @d: pointer to all variables int structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: who owns the dog.
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->owner = owner;
	d->age = age;
	d->name = name;
}
