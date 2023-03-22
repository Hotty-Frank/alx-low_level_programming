#include "main.h"
/**
 * _islower- checks weather a character is lowercase.
 *@c: function parameters
 *Return:1 if lowercase else Return: 0 Always
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	return (0);
}
