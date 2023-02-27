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

	while (a[i] || n > 0)
	{
		if (n <= 0)
		{
			printf("%d\n", a[n]);
			break;
		}
		if (i + 1 == n)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);

		i++;
	}

}
