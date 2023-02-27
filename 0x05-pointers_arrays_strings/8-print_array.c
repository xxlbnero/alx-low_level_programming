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

	for (; i < n; i++)
	{
		if (i == n)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", *(a + i));
	}
}
