#include "main.h"
/**
 *print_alphabet_x10 - Function prints alphabets in lowercase *10
 *Return: void
 */
void print_alphabet_x10(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		while (n <= 'j')
		{
			_putchar('\n');
		}
		_putchar(n);
	}
}
