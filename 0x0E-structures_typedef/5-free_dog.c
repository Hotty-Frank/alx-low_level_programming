#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function free dogs.
 * @d: pointer to dogs.
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
