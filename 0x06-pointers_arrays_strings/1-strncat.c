#include "main.h"
#include <string.h>
/**
 * _strncat - Function concentraantes scc to dest with given bytes
 * @dest: string
 * @src: string parameter
 * @n: function parameter.
 * Return: Poimter to result.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
