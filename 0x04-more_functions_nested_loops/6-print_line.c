#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: number of line to print
 * Return: Null
 */

void print_line(int n)
{
	int i = 1;

	while (i < n)
	{
		i += 1;

		_putchar('_');
	}
	_putchar('\n');
}
