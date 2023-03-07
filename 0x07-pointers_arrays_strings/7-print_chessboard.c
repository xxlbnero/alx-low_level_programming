#include "main.h"

/**
 * print_chessboard -  prints the chess board
 * @a: a pointer to an array of elements
 * Return: NUll
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == 32)
			{
				_putchar(' ');
				continue;
			}
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
	_putchar(10);
}
