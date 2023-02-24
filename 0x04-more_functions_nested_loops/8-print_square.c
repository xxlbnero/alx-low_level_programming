#include "main.h"

/**
 * print_square - print n number of # square
 * @size: size of # to print
 * Return: Null
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			_putchar(35);
		}
		_putchar(35);
		/* _putchar('\n'); */
	}
	_putchar('\n');
}
