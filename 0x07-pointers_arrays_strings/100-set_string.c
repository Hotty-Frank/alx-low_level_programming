#include "main.h"
/**
 * set_string - functions sets the value of a pointer to char.
 * @s: pointer to pointer.
 * @to: pointer to char.
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	int i;

	i = 0;
	for (; i > 0; i++)
	{
		(*(*s + i)) = *(to);
		s++;
	}
}
