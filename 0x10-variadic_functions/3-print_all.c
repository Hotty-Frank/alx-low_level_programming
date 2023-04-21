#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: list of type arguments passed.
 * Return: void function hence nothing.
 */
void print_all(const char * const format, ...)
{
	va_list a;
	char *s;
	int x = 0;

	va_start(a, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				break;
			case 's':
				s = va_arg(a, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if (format[x + 1] != '\0' && (format[x] == 'c' || format[x] == 'i'
		|| format[x] == 'f' || format[x] == 's'))
			printf(", ");
		x++;
	}
	va_end(a);
	printf("\n");
}
