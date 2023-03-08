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
		if (*s == '\n')
		{
			_print_rev_recursion(s + 1);
		}
		else
		{
			_print_rev_recursion(s + 1);
		}
	}
	_putchar(*s);
}
