#include "main.h"

/**
 * print_numbers - print numbers 0 through 9
 * @void: no argument required
 * Return: Null
 */

void print_numbers(void)
{
	for (int i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
