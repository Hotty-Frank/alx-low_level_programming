#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @j:fuction parameter.
 * Return: % of paarameter inputed.
 */
int print_last_digit(int j)
{
	if (j > -10 && j < 10)
	{
		_putchar(j + '0');
	}
	if (j < -9 && j > 9)
	{
		return (j % 10);
	}
}
