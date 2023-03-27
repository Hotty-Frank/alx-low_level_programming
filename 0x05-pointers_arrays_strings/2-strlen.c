#include "main.h"
/**
 * _strlen - calculates the length of a string excluding \0.
 * @s: function parameter of character type.
 * Return: number of characters.
 */
int _strlen(char *s)
{
	while (*s != '\0')
		s++;
}
