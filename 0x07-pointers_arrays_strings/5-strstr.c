#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: string parameter.
 * @needle: substring.
 * Return: pointer to the beginning foubd sub or Null.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (0);
}

