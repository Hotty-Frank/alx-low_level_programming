#include "main.h"
/**
* print_most_numbers - function prints number 0-9 but not 2 and 4.
* followed by newline
* Return: always 0.
*/
void print_most_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		if (b == 50 || b == 52)
		{
			continue;
		}
		_putchar(b);
	}
	_putchar('\n');
}
