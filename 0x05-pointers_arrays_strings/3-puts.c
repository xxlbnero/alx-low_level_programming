#include "main.h"

/**
 * _puts - Prints a given string to standard output
 * @str: string of characters
 * Return: Null
 */

void _puts(char *str)
{
	int idx;

	idx = 0;

	while (str[idx] != '\0')
	{
		_putchar(str[idx]);

		idx += 1;
	}
	_putchar('\n');
}
