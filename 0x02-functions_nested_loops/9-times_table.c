#include "main.h"

/**
 * times_table - function prints nine time tables stating zero.
 *
 * Return: 0 for success
 */
void times_table(void)
{
	int i, j, oa;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{

			oa = i * j;
			_putchar(44);
			_putchar(32);
			if (oa <= 9)
			{
				_putchar(32);
				_putchar(oa + 48);
			}
			else
			{
				_putchar((oa / 10) + 48);
				_putchar((oa % 10) + 48);
			}
		}
		_putchar ('\b');
	}
}
