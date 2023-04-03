#include "main.h"
/**
 * _strchr - function locates character 'c'
 * @s: string parameter.
 * @c: character.
 * Return: pointer to first occurence of c or NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
