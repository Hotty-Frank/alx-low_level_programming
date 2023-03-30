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
	int a;
	int b;
	int i;

	a = strlen(dest);
	b = strlen(src);
	for (i = 0; i <= b; i++)
	{
		if (b < n)
		{
			dest[a + i + (b - n)] = src[i];
		}
		else
		{
			dest[a + n -1] = src[b - (b - n) - 1];
		}
	}
	return (dest);
}
