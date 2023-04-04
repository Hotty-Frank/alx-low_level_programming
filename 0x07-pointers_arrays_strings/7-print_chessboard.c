#include "main.h"
/**
 * print_chessboard - prints chess board.
 * @a: pointer to character.
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int m;

	for (c = 0; c < 8; c++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[c][m]);
		_putchar('\n');
	}
}

