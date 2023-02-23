#include "main.h"

/**
 * more_numbers - Prints numbers 0 through 14 ten times
 * @void: no argument required
 * Return: Null
 */

void more_numbers(void)
{
	int j;
	int lim;

	for (lim = 0; lim < 10; lim++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
