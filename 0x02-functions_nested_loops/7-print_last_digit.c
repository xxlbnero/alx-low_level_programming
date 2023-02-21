#include "main.h"

/**
 * print_last_digit - Return the last digit  of a given number
 * @n: integer value expected as parameter
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	char l = n % 10;
	int step = 0;

	if (n % 10 > 0)
	{
		_putchar(l);
		return (l);
	}
	else
	{
		while (l < 0)
		{
			step += 1;
			++l;
		}
	}
	_putchar(step);
	return (step);
}
