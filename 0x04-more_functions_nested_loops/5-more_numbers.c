#include "main.h"
/**
 * more_numbers - Function that print a line of nums 10 times.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a;
	int b;

	a = 1;

	while (a < 11)
	{
		b = 1;
		while (b < 15)
		{
			printf("%d", b);
			b++;
		}
		putchar('\n');
		a++;
	}
}
