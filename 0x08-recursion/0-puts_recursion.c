#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: string to output
 * Return: Null
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
