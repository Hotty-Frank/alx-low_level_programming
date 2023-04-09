#include "main.h"
#include <string.h>
/**
*_strcat - Function append stc to dest.
* @dest: string
* @src: string.
* Return: Pointer to the resulting string.
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
