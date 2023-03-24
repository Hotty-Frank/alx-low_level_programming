#include "main.h"
/**
 * print_triangle- funtion prints triangle.
 * @size: function parameters.
 * followed by new line.
 * Return: always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size < 0 && size != 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
