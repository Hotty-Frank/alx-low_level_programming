#include <stdio.h>
#include <stdlib.h>
/**
 * main - c language body function.
 * @argc: arguement count.
 * @argv: argument vector.
 * Return: Always 0 for exit_success.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
