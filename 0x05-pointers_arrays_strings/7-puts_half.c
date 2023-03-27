#include "main.h"
/**
 * puts_half - prints the second halff of a string.
 * @str: string
 * Return: Aways 0.
 */
void puts_half(char *str)
{
	int a, b, lenth;

	lenth = 0;

	for (a = 0; str[a] != '\0'; a++)
		lenth++;

	b = (lenth / 2);

	if ((lenth % 2) == 1)
		b = ((lenth + 1) / 2);
	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
