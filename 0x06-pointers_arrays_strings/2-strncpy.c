#include "main.h"
#include <string.h>
/**
 * _strncpy - This funtion append n number of string to another.
 * @dest: destination string.
 * @src: source string
 * @n: limit src elements to be copied.
 * Return: pointer to result string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
