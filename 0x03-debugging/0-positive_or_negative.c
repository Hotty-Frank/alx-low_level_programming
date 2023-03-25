#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - function
* @i: funtion params
* Description: if negative okey bye
* Return: void.
*/

void positive_or_negative(int i);
{
	int i;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
