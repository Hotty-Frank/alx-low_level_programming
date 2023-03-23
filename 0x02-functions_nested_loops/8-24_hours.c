#include "main.h"
/**
 *jack_bauer - function prints every minute in 24 hrs clock.
 *Return: 0 alaways to end programme.
 */
void jack_bauer(void)
{
	int m, h;

	h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
