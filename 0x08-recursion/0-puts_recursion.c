#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: string to output
 * Return: Null
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
	_putchar(10);
}
