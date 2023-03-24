#include "main.h"
/**
 * print_line - Function that prints a straight line.
 * @n: fuction parameters
 * Return: value of type int.
 */
void print_line(int n)
{
	int i;

	if (n < 0 && n != 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}


