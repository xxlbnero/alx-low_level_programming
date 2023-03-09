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
 * sqrt - find the square root of a number
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

/**
 * is_prime_aux - auxliary function to check for prime
 * @n: number
 * @i: divisor
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_aux(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i > _sqrt(n))
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_aux(n, i + 1));
}


/**
 * is_prime_number - checks if a given number is prime
 * @n: input integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_aux(n, 2));
}
