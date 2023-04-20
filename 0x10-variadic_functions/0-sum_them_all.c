#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns sum of all parameters.
 * @n:number of arguments.
 * @...: variadic.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int v, sum;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(x, n);

	for (v = 0; v < n; v++)
	{
		sum += va_arg(x, int);
	}
	va_end(x);
	return (sum);
}
