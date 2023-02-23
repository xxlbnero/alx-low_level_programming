#include "main.h"

/**
 * more_numbers - Prints numbers 0 through 14 ten times
 * @void: no argument required
 * Return: Null
 */

void more_numbers(void)
{
	int i;
	int lim;

	int tens, units;

	for (lim = 0; lim < 10; lim++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i % 10 != i)
			{
				tens = i / 10;
				units = i % 10;

				_putchar(tens);
				_putchar(units)

			}
			else
			{
				_putchar(i);
			}
		}
		_putchar('\n');
	}

}
