#include "main.h"

/**
 * _isdigit - checks if an input is a digit
 * @c: argument input from the user
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
