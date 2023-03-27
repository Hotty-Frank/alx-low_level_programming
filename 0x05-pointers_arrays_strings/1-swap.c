#include "main.h"
/**
 * swap_int - Functions swaps two ints
 * @a: 1st int
 * @b: Second int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
