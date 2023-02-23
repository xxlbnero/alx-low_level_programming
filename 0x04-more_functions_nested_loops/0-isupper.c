#include "main.h"

/**
 * _isupper - Checks if a given character is upper case
 * @c: character to check
 * Return: 1 if c upper, 0 otherwise
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
