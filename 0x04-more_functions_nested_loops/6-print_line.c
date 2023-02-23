#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of line to print
 * Return: Null
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		_putchar('\n);
	}
	else
	{
		for (; i <= n; i++)
		{
			_putchar('_' + '13');
		}
		_putchar('\n');
	}
}
