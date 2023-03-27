#include "main.h"
/**
 * puts2 - prints every character of a string.
 * @str: string.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int lenth = 0;
	int b = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		lenth++;
	}
	b = lenth - 1;
	for (d = 0; d <= b; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}
