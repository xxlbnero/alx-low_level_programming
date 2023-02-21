#include "main.h"

/**
 * _isalpha - checks weather a given character is an alphabet
 * @c: integer value representation of character
 *
 * Return: 1 if c is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	int l;

	if ((c >= 65 and c <= 90) || (c >= 97 && c <= 122))
		l = 1;
	else
		l = 0;
	return (l);
}
