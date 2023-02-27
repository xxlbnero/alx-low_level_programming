#include <stdio.h>

/**
 * print_array - Print n elements of an arry
 * @a: array to print
 * @n: number of element
 * Return: Null
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (; i < n -  1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d,\n", a[n]);
}
