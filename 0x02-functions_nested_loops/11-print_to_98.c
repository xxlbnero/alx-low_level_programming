#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers up to 98
 * @n: Starting point
 *
 * Return: Null
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d ", n);
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;

			if (n == 98)
				break;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;

			if (n == 98)
				break;
		}
	}
	_putchar('\n');
}
