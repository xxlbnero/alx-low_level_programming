#include "main.h"

/**
 * _islower - Checks if a given value is lowercase
 * @c: Integer representation of given character
 *
 * Description: Check weather variable c is a lowercase letter
 *
 * Return: 1 if c is lowecase, 0 otherwise
 */

int _islower(int c)
{
	int l;

	if (c >= 97 && c <= 122)
		l = 1;
	else
		l = 0;
	return (l);
}
