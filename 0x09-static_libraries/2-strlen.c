#include "main.h"
/**
* _strlen - calculates the length of a string excluding \0.
* @s: function parameter of character type.
* Return: number of characters.
*/
int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}
	return (lenth);
}
