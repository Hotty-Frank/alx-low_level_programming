#include "main.h"
#include <string.h>

/**
 * str_concat -- concatenates two strings.
 * @s1: destination string poiter.
 * @s2: source string pointer.
 * Return: pointer to the new allocated space or NULL for faiure.
 */
char *str_concat(char *s1, char *s2)
{
	int i;

	int j;

	char *b;

	i = strlen(s1);
	j = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	b = malloc(sizeof(char) * (i + j + 1));
	if (b == NULL)
	{
		return (NULL);
	}
	strcpy(b, s1);
	strcat(b, s2);
	return (b);
}
