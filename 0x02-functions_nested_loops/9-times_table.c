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

			tens = tab / 10;
			units = tab % 10;

			if (col == lim && tab < 10)
			{
				_putchar(tab + '0');
			}
			else
			{
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			if (tab > 9)
			{
				_putchar(tens + '0');
				_putchar(units + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
