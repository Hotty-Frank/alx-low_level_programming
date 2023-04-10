#include <stdio.h>
#include <stdlib.h>
/**
 * main - program adds positive numbers.
 * @argc: arguement count.
 * @argv: arguement vector.
 * Return: 1 if numbers contain symbol else 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	for (i = 1; i < argc; i++)
	{
		if (*(argv[i] != int))
		{
			printf("Error\n");
		}
		return (1);
	}
	for (argc = 1; argc > 1; argc++)
	{
		result += atoi(argv[argc - 1]);
		printf("%d\n", result);
	}
	return (0);
}



