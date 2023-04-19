#include "function_pointers.h"
/**
* int_index( - serches for an int.
* @array: function parameter array.
* @size: size of array.
* @cmp: function pointer.
* Return: Always zero.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
