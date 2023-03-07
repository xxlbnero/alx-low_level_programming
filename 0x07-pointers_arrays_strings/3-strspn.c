#include "main.h"

/**
 * _strspn - Get the length of a prefex substring
 * @s: String to search
 * @accept: substring
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;
	char cur_char;

	count = 0;

	for (i = 0; s[i]; i++)
	{
		cur_char = s[i];
		for (j = 0; accept[j]; j++)
		{
			if (cur_char >= 'a' && cur_char <= 'z' && accept[j]
					>= 'a' && accept[j] <= 'z')
			{
				count += 1;
				break;
			}

			return (count);
		}
	}

	return (count);
}
