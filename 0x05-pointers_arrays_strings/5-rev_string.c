#include "main.h"

/**
 * rev_string - Given a sing, reverse it's contents
 * @s: input sing
 * Return: Null
 */

void rev_string(char *s)
{
	int last_index, i;

	last_index = 0;

	/* get the length of sing */
	for (i = 0; s[i] != '\0'; i++, last_index++)
		;

	const int target = last_index;
	/* Create an array the size of the length of sing */
	char c[target];

	/* Copy each element in s starting from the last */
	for (i = 0; i < target; i++)
	{
		c[i] = s[last_index - (i + 1)];
	}

	/* Modify sing in-place */
	for (i = 0; i != target; i++)
	{
		s[i] = c[i];
	}
}
