#include "main.h"
#include <string.h>
/**
*_memset - fills the first n bytes of the memory area pointed to by s.
*@s: destination paramenter
*@b: source parameter
*@n: n bytes to be copied.
*Return: a pointer to s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
