#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: character string
 * @c: character to locate
 * Return: Pointer to the first occurance of character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c && s[i] != '\0')
		{
			/* point s to the address of s[i] */
			s = &s[i];
			return (s);
		}
		else
		{
			s[i] = '\0';
			return (s);
		}
	}

	return (NULL);
}
