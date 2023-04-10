#include <stdio.h>
#include <stdlib.h>
/**
 * main - function body.
 * @argc: arguement count.
 * @argv: arguement vector.
 * Return: 0 for success or 1 for error.
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);
	return (0);
}

