#include "main.h"

/**
 * print_diagonal -> Print n number of diagonal char
 * @n: number of specified char to print
 * Return: Null
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else if (n == 1)
	{
		_putchar(92);
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			_putchar(92);
			_putchar('\n');

			for (j = 0; j <= i; j++)
			{
				_putchar(32);
			}
		}
		_putchar(92);
		_putchar('\n');
	}
}
