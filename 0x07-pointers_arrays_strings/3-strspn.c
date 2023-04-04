#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of prefit substring.
 * @s: function parameter
 * @accept: function parameter 2.
 * Return: bytes in the initial seg s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
