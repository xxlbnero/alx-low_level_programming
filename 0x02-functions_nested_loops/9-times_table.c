#include "main.h"

/**
 * times_table - Function to print the nine times table
 * @void: No argument required
 *
 * Return: Null
 */

void times_table(void)
{
	int row, col, prod, tens, units;
	int lim = 9;

	for (row = 0; row <= lim; row++)
	{
		for (col = 0; col <= lim; col++)
		{
			prod = row * col;
			tens = prod / 10;
			ones = prod % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ones);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + ones);
			}
		}
		_putchar('\n');
	}
}
