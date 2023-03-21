#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 for succes
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
