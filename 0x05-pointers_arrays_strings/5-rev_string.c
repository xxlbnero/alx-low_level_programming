#include "main.h"

/**
 * rev_string - Given a string, reverse it's contents
 * @s: input string
 * Return: Null
 */

void rev_string(char *s)
{
	int str_count;

	str_count = 0;

	for (int i = 0; s[i] != '\0'; i++, str_count++)
		;
	while (str_count)
	{
		_putchar(s[str_count]);
		str_count -= 1;
	}
	_putchar(s[0]);
	_putchar(10);
}
