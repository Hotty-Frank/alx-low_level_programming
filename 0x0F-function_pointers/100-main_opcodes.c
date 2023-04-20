#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function prints opocodes of it own main function..
 * @argc: arguments count.
 * @argv: argument vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int k, byts;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;
	for (k = 0; k < byts; k++)
	{
		if (k == byts - 1)
		{
			printf("%02hhx\n", ar[k]);
			break;
		}
		printf("%02hhx ", ar[k]);
	}
	return (0);
}

