#include "main.h"

/**
 * puts2 - print ever other character
 * @str: input string
 * Return: Null
 */

void puts2(char *str)
{
	int i, count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++, count++)
		;
	i = 0;

	while (i <= count)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
