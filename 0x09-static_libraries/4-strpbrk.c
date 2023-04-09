#include "main.h"
#include <string.h>
/**
* _strpbrk - searches a string for set bytes.
* @s: fuction parameter.
* @accept: another string.
* Return: pointer to bytes in s matching those in accept.
*/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return ('\0');
}
