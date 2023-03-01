#include "main.h"

/**
 * _getLen - Given an input string, return it's length
 * @str: Input string
 * Return: Length of str
 */

int _getLen(char *str)
{
	int count, i;

	count = 0;

	for (i = 0; str[i] != '\0'; i++, count++)
		;
	return (count);
}
