#include "main.h"

/**
 * print_rev - Reverse the content ot a string
 * @s: String to reverse
 * Return: Null
 */

void print_rev(char *s)
{
	int str_count;

	str_count = 0;

	for (int idx = 0; s[idx] != '\0'; idx++, str_count++)
		;

	while (str_count >= 0)
	{
		_putchar(s[str_count]);
		str_count -= 1;
	}
	_putchar('\n');
}
