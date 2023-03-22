#include "main.h"
/**
 *print_alphabet_x10 - Function prints alphabets in lowercase *10
 *Return: void
 */
void print_alphabet_x10(void)
{
	int n, j;

	for (j = 1; j <= 10; j++)
	{

		for (n = 97; n <= 122; n++)
		{
			putchar(n);
		}
		putchar('\n');
	}
}
