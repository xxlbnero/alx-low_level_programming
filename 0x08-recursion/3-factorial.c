#include "main.h"

/**
 * factorial - Recursively calculate the factorial of a given number
 * @n: input number
 * Return: factorial of number n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-n / n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
