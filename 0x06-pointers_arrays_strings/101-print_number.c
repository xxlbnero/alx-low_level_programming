#include "main.h"

/**
 * print_number - Prints a number using custom putchar
 * @n: number to print
 * Return: Null
 */

void print_number(int n)
{
	/* best case, number of digit is 1. Print it !! */
	if (n >= 0 && n <= 9)
	{
		_putchar('0' + (n % 10));
	}
	else
	{
		/* more than 1 digit. Attempt to print */
		while (n > 9)
		{
			_putchar('0' + (n / 10));
			n %= 10;
		}
		_putchar('0' + (n % 10));
	}	
}
