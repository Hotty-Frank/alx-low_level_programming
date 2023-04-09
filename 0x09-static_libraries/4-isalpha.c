#include "main.h"
/**
*_isalpha - a function that checks all upper and lowercase alphabets.
*@c: Function parameters
*Return: 1 if alphabet letter else Return: 0
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
