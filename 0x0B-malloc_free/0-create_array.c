#include "main.h"
/**
 * create_array - creates an array of char initialized it with specific char.
 * @c: charater function parameter.
 * @size: size allocated in memory.
 * Return: Null if size is equal to zero. pointer to array if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *ar;

	ar = malloc(sizeof(unsigned int));

	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		return (ar);
		i++;
	}
	return (0);
}
