#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0) for succees
 */
int main(void)
{
	int b, c;

	for (b = 'a'; b <= 'z'; ++b)
	{
		putchar(b);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}
