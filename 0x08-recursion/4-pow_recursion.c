#include "main.h"
#include <math.h>
/**
 * _pow_recursion  - returns value of x raised to power y.
 * @x: fuction parameter.
 * @y: function parameter.
 * Return: x to power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

