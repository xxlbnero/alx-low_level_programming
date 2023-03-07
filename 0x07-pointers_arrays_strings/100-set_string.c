#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: pointer to pointer to s
 * @to: char pointer
 * Return: NUll
 */

void set_string(char **s, char *to)
{
	char *tptr;

	tptr = to;
	*s = tptr;
}
