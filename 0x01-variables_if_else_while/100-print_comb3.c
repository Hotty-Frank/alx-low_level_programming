#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 for success
 */
int main(void)
{
	int n, m;

	for (n = 48; m < 58; n++)
		for (m = 49; m < 58; m++)
		{
			{
				putchar(n);
				putchar(m);
				n++;
				m++;
				if (n != 56 || m != 57)
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
