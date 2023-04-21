#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a newline.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to function.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list y;

	va_start(y, n);

	for (z = 0; z < n; z++)
	{
		char *stg = va_arg(y, char *);

		if (stg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", stg);
		}
		if (z != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(y);
	printf("\n");
}
