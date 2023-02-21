#include "main.h"

/**
 * times_table - Function to print the nine times table
 * @void: No argument required
 *
 * Return: Null
 */

void times_table(void)
{
	int row, col, tab;
	int lim = 9;

	for (row = 0; row <= lim; row++)
	{
		_putchar('\n');

		for (col = 0; col <= lim; col++)
		{
			tab = row * col;

			if (col == lim)
			{
				_putchar('0' + tab);
			}
			else
			{
				_putchar('0' + tab);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
