#include "main.h"
/**
 * print_line - Function that prints a straight line.
 * @n: fuction parameters
 * Return: value of type int.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
