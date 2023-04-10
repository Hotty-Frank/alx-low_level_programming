#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program adds positive numbers.
 * @argc: arguement count.
 * @argv: arguement vector.
 * Return: 1 if numbers contain symbol else 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int k;
	int result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
