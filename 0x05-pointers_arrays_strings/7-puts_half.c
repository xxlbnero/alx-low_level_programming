#include "main.h"

/**
 * puts_half - prints the half of a given string
 * @str: input string
 * Return: Null
 */

void puts_half(char *str)
{
	int i, half, count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++, count++)
		;

	if (count % 2 == 0)
	{
		half = (count / 2);
	}
	else
	{
		half = (count / 2) + 1;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
