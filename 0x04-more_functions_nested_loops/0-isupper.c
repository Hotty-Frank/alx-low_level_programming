#include "main.h"
/**
 * _isupper - Function checks for uppercase letter
 * @c: Funtion parameters.
 * Return: 1 if uppercase otherwise return 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
		putchar('\n');
	}
	return (0);
}
