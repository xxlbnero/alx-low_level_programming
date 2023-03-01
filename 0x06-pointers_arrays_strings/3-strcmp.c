#include "main.h"

/**
 * _strcmp - Compare two strings for equality
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal, negative if s1 is less than s2,
 * positive if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int res;

	for (i = 0, j = 0; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j])
			;
		else
		{
			res = s1[i] - s2[j];
		}

		return (res);
	}

	return (0);
}
