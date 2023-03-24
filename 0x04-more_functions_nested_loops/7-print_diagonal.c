#include "main.h"
/**
 * print_diagonal - function prints a diagonal line.
 * @n: function parameters.
 * Return: ralways 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 0 && n != 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i == j)
				{
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
		putchar('\n');
	}
}
