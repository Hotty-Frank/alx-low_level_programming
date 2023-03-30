#include "main.h"
/**
 * string_toupper(- Function changes lowercase letter into uppercase.
 * @n: string pointer
 * Return: upper case letters.
 */
char *string_toupper(char *n)
{
	int j;

	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
		j++;
	}
	return (n);
}
