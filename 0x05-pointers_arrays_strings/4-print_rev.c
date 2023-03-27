#include "main.h"
/**
 * print_rev - Reverse print characters of a string.
 * @s: function parameter of string pointer.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int lenth = 0;
	int b;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}
	s--;
	for (b = lenth; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
