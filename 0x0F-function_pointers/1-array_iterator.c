#include "function_pointers.h"
/**
* array_iterator - exeutes a function given s parameter of array.
* @array: array
* @size: size of array.
* @action: pointer to function.
* Retern: Always (0).
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int elem;

	if (array != NULL && size > 0 && action != NULL)
		for (elem = 0; elem < size; elem++)
			action(array[elem]);
}

