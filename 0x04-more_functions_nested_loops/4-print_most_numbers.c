#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 excluding 2 and 4
 * @void: No argument required
 * Returun: Null
 */

void print_most_numbers(void)
{
	int i;

	i = 48;
	for (; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
