#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: function parameter.
 * Return: pointer to the mem or (98).
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
