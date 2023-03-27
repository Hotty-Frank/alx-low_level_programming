#include "main.h"
/**
 * *_strcpy - function copys the string of one type to the buffer of another.
 * @src: type string parameter.
 * @dest: also string parameter.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for (; k < j; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
