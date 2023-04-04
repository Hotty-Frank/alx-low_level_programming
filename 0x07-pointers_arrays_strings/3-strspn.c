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
	unsigned int len;
	int i;
	int pstv = 0;

	while (*s != '\0')
	{
		pstv = 0;
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
			{
				len++;
				pstv = 1;
				break;
			}
		if (pstv == 0)
		{
			return (len);
		}
		s++;
	}
	return (len);
}
