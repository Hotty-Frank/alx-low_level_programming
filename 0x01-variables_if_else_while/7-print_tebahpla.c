#include <stdio.h>
/**
 * main - Entry point
 * Return: Always print 0 for success
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; --n)
	{
		putchar(n);
	}
	{
		putchar('\n');
	}
	return (0);
}
