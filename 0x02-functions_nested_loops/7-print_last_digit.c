#include "main.h"

/**
 * print_last_digit - Return the last digit  of a given number
 * @n: integer value expected as parameter
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar(last_digit);

	return (last_digit);
}