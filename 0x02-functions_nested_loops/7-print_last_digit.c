#include "main.h"

/**
 * print_last_digit - Return the last digit  of a given number
 * @n: integer value expected as parameter
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int ab_n = _abs(n);

	return (ab_n % 10);
}
