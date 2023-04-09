#include "main.h"
/**
* _isdigit - function that check positive 0-9 numbers
* @c: function parameters.
* Return: 1 if its a digit otherwise return 0
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
