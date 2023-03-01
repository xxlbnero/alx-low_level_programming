#include "main.h"

/**
 * reverse_array - Modifies the values of an integer array backwards
 * @a: array of integers
 * @n: size of array
 * Return: Null
 */

void reverse_array(int *a, int n)
{

	int z[n];
	int i, j;

	for (i = n, j = 0; i >= 0; i--, j++)
	{
		z[j] = a[i - 1];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = z[i];
	}
}
