#include "main.h"
/**
 * _calloc - allocate mem to array of nmemb element of at sixe.
 * @nmemb: limited element of array to be appended to dest.
 * @size: function parameter size type.
 * Return: pointer to alloated mem or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < nmemb; j++)
	{
		((char *)p)[j] = 0;
	}
	return (p);
}
