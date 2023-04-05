#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to a string.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int i, j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
