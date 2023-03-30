#include "main.h"
#include <string.h>
/**
 * _strcmp - Compares two strings.
 * @si: Ist string parameter.
 * @s2: ssecond string.
 * Return: pointer to resultant.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
