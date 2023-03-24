#include "main.h"
/**
 * print_square - function that prints a square
 * @size: parameter of the function.
 * Return: Always 0.
 */
void print_square(int size)
{
	int j;
	int i;

	if (size <= 00)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


