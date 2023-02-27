#include "main.h"

/**
 * print_rev - Reverse the content ot a string
 * @s: String to reverse
 * Return: Null
 */

void print_rev(char *s)
{
	int str_count, idx;

	str_count = 0;
	idx = 0;

	for (; s[idx] != '\0'; idx++, str_count++)
		;

	while (str_count >= 0)
	{
		if (s[str_count] == '\n')
			continue;
		_putchar(s[str_count]);
		str_count -= 1;
	}
	_putchar('\n');
}
