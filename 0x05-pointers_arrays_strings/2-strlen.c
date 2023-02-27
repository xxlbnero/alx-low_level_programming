#include "main.h"

/**
 * _strlen - given a char string, return it's length
 * @s: String
 * Return: Length of s
 */

int _strlen(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
