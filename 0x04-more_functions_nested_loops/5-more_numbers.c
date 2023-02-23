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

	for (lim = 0; lim < 10; lim++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(_putchar((i / 10) + '0' + '0'));
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}

}
