#include "main.h"

/**
 * puts2 - print ever other character
 * @str: input string
 * Return: Null
 */

void puts2(char *str)
{
	int i;

	for (i = 0; ((i % 2 == 0) && (str[i] != '\0')); i++)
		_putchar(i + '0');
	_putchar('\n');
}
