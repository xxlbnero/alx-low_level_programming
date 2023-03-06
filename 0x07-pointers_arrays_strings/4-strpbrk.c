#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: string
 * @accept: acceptable bytes to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char cur_char;

	for (i = 0; s[i]; i++)
	{
		cur_char = s[i];
		for (j = 0; accept[j]; j++)
		{
			if (cur_char == accept[j])
			{
				s = &s[j - 1];
				return (s);
			}
		}
	}

	return (NULL);
}
