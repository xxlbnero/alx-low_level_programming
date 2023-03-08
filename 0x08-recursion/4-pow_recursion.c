#include "main.h"

/**
 * _pow_recursion - Computes the power of x to y
 * @x: number
 * @y: exponent
 * Return: power of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		int z;

		z = _pow_recursion(x, y / 2);
		return (z * z);
	}
}
