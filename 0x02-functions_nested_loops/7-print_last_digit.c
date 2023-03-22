#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @j:fuction parameter.
 * Return: % of paarameter inputed.
 */
int print_last_digit(int j)
{
	j = j % 10;
	if (j < 0)
		j = -j;
	_putchar(j % 10 + '0');
	return (j);
}
