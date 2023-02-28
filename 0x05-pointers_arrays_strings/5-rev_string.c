#include "main.h"

/**
 * rev_string - Given a string, reverse it's contents
 * @s: input string
 * Return: Null
 */

void rev_string(char *s)
{
	char *t;
	int last_index, target, i;

	last_index = 0;

	/* get the length of string */
	for (i = 0; str[i] != '\0'; i++, last_index++)
		;

	target = last_index;
	/* Create an array the size of the length of string */
	char c[last_index];

	/* Copy each element in str starting from the last */
	for (i = 0; i < target; i++)
	{
		c[i] = str[last_index - (i + 1)];
	}

	/* Modify string in-place */
	for (i = 0; i != target; i++)
	{
		str[i] = c[i];
	}
}
