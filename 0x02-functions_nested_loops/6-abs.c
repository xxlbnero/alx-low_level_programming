#include "main.h"

/**
 * _abs - Print the absolute value of a given number
 * @n: parameter value inputted by user
 *
 * Return: the absolute value of a given number
 */

int _abs(int n)
{
	int step = 0;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		while (n < 0)
		{
			step += 1;
			++n;
		}
	}
	return (step);
}
