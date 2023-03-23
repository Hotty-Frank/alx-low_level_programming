#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - function prints number 0-9 but not 2 and 4.
* followed by newline
* Return: always 0.
*/
void print_most_numbers(void)
{
	int b;

	b = 48;
	if (b != 49 && b != 52)
	{
		for (b = 48; b < 58; b++)
		{
			putchar(b);
		}
		putchar('\n');
	}
}
