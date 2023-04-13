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

	if (min > max)
	{
		return (NULL);
	}
	new = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (new == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		new[x] = min;
		x++;
		min++;
	}
	return (new);
}
