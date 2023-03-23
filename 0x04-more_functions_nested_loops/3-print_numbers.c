#include "main.h"
/**
 * print_numbers - functions that prints number from 0-9.
 * Return: always 0.
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
