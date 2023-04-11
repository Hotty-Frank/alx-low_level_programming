#include "main.h"
/**
 * alloc_grid - return a pointer to 2d arrays if int.
 * @width: 1st dimention parameter.
 * @height: 2nd dimention parameter.
 * Return: NULL for failure else return pointer.
 */
int **alloc_grid(int width, int height)
{
	int k;

	int l;

	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = (int **) malloc(sizeof(int *) * width);

	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < width; k++)
	{
		s[k] = (int *) malloc(sizeof(int) * height);
		if (s[k] == NULL)
		{
			free(s);
			for (l = 0; l <= k; l++)
				free(s[l]);
			return (NULL);
		}
	}
	l = 0;
	for (k = 0; k < width; k++)
	{
		s[k][l] = 0;
	}
	return (s);
}
