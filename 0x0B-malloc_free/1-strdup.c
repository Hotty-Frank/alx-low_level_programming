#include "main.h"

/**
 * _strdup - returns the pointer to newly allocated memory.
 * @str: pointer to a string.
 * Return: NULL if str is NULL.
 */
char *_strdup(char *str)
{
	int i;

	int j;

	char *s; /*new string*/

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}
	return (s);
}

