#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string followed by a newline.
 * @s: pointer to a string.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		puts(s);
	}
}
