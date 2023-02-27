#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers
 * @a: first integer
 * @b: second integer
 * Return: Null
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
