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

		Last_digit = % 10;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (Last_digit < 5)
		{
			printf("Last digit of n is %d and is greater than 5\n", n);
		}
		if (Last_digit == 0)
		{
			printf("Last digit of n is %d and is 0\n", n);
		}
		if (Last_digit < 6)
			&&
		Last_digit != 0;
		{
			printf("Last digit of n is %d and is less than 6 and not 0\n", n);
		}
		return (0);
}
