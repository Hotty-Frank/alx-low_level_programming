#include "main.h"
#include <string.h>
/**
 * *string_nconcat - concatenates two strings with n element for 2nd.
 * @s1: function parameter dest string.
 * @s2: function parameter src string.
 * @n: limited element tranferable from src"".
 * Return: pointer to newly allocated mem of new string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int lend, i;

	unsigned int lens, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lend = strlen(s1);
	lens = strlen(s2);
	if (lens > n)
	{
		lens = n;
	}
	ptr = malloc(lend + n);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lend; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; k < n; k++)
	{
		ptr[i + k] = s2[k];
	}
	ptr[i + k] = '\0';
	return (ptr);
}


