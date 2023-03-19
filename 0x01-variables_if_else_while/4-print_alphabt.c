#include <stdio.h>
/***
 * main - Entry point
 * Description: the programme will type all alphabets except q & e
 * in lowercase
 * Return: Always 0 for success
 */
int main(void)
{
	int h;

	for (h = 'a'; h <= 'z'; ++h)
		if (h != 'q' && h != 'e')
	{
		putchar(h);
	}
	{
		putchar('\n');
	}
	return (0);
}
