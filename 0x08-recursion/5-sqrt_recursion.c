#include "main.h"

/**
 * sqrt_recur - find the square root of a number
 * @x: input number of type integer
 * @g: sub val
 * Return: estimated value of g
 */

int sqrt_recur(int x, int g)
{
	int n_g = (g + x / g) / 2;

	if (n_g == g)
	{
		return (g);
	}
	return (sqrt_recur(x, n_g));
}

/**
 * _sqrt - find the square root of a number
 * @x: input number
 * Return:  square root of x
 */

int _sqrt(int x)
{
	if (x < 0)
	{
		return (-1);
	}
	if (x == 0 || x == 1)
	{
		return (x);
	}
	return (sqrt_recur(x, x / 2));
}

