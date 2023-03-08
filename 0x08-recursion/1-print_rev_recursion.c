#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: input string
 * Return: Null
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	if (s == NULL)
	{
		_putchar('\0');
	}
	_putchar(*s);
}
