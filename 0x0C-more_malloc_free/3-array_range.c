#include "main.h"
/**
 * array_range - creates and array with all values of parameter.
 * @min:funtion parameter of array
 * @max: function parameter
 * Return: pointer to the new string or null.
 */
int *array_range(int min, int max)
{
	int *new;

	int x;

	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	new = malloc(sizeof(int) * size);
	if (new == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		new[x] = min + x;
	}
	return (new);
}

