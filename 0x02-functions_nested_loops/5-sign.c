#include "main.h"

/**
 * print_sign - Print the sign of a given number according to program spec
 * @c: integer value rep of character
 *
 * Return: 1 if n is greater than 0, zero if n is 0, -1 otherwise
 */

int print_sign(int c)
{
	int l;

	if (n > 0)
	{
		_putchar('+');
		l = 1;
	}
	else if  (n == 0)
	{
		_putchar('0');
		l = 0;
	}
	else
	{
		_putchar('-');
		l = -1;
	}

	return (l);
}
