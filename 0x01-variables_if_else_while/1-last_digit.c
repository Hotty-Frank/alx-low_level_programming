#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always (o) for success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = 98;

	if (n % 10 < 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n % 10);
	}

	n = -98;
	if (n % 10 == 0)
	{
		printf("Last digit of n is %d and is 0\n", n % 10);
	}
	n = 980;
	if (n % 10  < 6 && n % 10 != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
