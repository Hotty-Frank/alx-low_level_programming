#include <stdio.h>
/**
 * main- Entry point
 * Return: Alwaays 0 for success
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
		for (m = 49; m < 58; m++)
		{
			{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	{
		putchar('\n');
	}
	return (0);
}
