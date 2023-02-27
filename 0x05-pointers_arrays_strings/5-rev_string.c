#include "main.h"

/**
 * rev_string - Given a string, reverse it's contents
 * @s: input string
 * Return: Null
 */

void rev_string(char *s)
{
	int i, str_count;

	str_count = 0;
	i = 0;

	for (i = 0; s[i] != '\0'; i++, str_count++)
		;
	while (str_count >= 0)
	{
		_putchar(s[str_count]);
		str_count--;
	}
	_putchar(10);
}
