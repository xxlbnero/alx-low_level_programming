#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string
 * @needle: match string
 * Return: Pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char tvar[1024];
	int i, j, needle_len;

	needle_len = 0;

	for (; needle[needle_len]; needle_len++)
		;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0] && haystack[i + 1] == needle[1])
		{
			for (j = 0; j < needle_len; j++)
			{
				tvar[j] = haystack[i + j];
			}
			if (*tvar == *needle)
			{
				haystack = &haystack[i];
				return (haystack);
			}
		}
	}

	return (NULL);
}
