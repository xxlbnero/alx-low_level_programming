#include "main.h"

/**
 * sqrt_aux - auxilary functon to calculate the sqrt of a number
 * @x: input of type int
 * @low: lower limit of type int
 * @high: upper limit of type int
 * Return: square root of input x
 */

int sqrt_aux(int x, int low, int high)
{
	int mid;
	int square;

	mid = (low + high) / 2;
	square = mid * mid;

	if (square == x)
	{
		return (mid);
	}
	else if (square < x)
	{
		return (sqrt_aux(x, mid, high));
	}
	else
	{
		return (sqrt_aux(x, low, mid));
	}
}


/**
 * _sqrt_recursion - calcluate and return the sqrt of a number
 * @n: input number
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_aux(n, 0, n));
	}
}
