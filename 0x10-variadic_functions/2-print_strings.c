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
	va_list y;
	unsigned int z;

	va_start(y, n);

	for (z = 0; z < n; z++)
	{
		char *s = va_arg(y, char *);

		if (s == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", s);
		}
		if (z != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(y);
	printf("\n");
}
