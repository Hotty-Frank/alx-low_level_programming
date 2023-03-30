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

	i = strlen(dest);
	j = strlen(src);
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
