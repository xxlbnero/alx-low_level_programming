#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of line to print
 * Return: Null
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
