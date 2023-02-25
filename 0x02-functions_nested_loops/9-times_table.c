#include "main.h"

/**
 * times_table - Function to print the nine times table
 * @void: No argument required
 *
 * Return: Null
 */

void times_table(void)
{
	int i, j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = (i * j);

			if (product < 10)
			{
				_putchar(' ');
				if (j == 9)
				{
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar((product % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				continue;
			}
			if (product > 9)
			{
				_putchar((product / 10) + '0');
			}

			if (j == 9)
			{
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
