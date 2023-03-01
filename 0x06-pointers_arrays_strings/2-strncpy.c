#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @src: from source
 * @dest: to destination
 * @n: up to n elements
 * Return: Pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_len;
	int i;

	src_len = _getLen(dest);

	for (i = 0; src[i] && i < n; i++)
	{
		if (i == src_len || src[i] == '\n')
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[i];
	}

	return (dest);
}
