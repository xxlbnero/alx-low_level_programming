#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string
 * @needle: match string
 * Return: Pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char cur_char;
	char *tVar;

	for (i = 0; haystack[i]; i++)
	{
		cur_char = haystack[i];

		for (j = 0; needle[j]; j++)
		{
			if (cur_char == needle[j])
			{
				tVar = &haystack[i];

				if (tVar == needle)
				{
					haystack = tVar;
					return (haystack);
				}
				break;
			}
		}
	}

	return (NULL);
}
