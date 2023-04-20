#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers followed by newline.
 * @separator: constant string to b2n  numbers.
 * @n: number of integers
 * Return: Alwaays 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(x);
	printf("\n");
}

