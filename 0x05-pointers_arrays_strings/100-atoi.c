#include "main.h"
/**
 * _atoi - converts a string into int
 * @s: furnction parameters.
 * Return: 0 if there is numbers in the string otherwise return ints.
 */
int _atoi(char *s)
{
	int a, b, c, lenth, d, digit;

	a = 0;
	b = 0;
	c = 0;
	lenth = 0;
	d = 0;
	digit = 0;

	while (s[lenth] != '\0')
		lenth++;

	while (a < lenth && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
