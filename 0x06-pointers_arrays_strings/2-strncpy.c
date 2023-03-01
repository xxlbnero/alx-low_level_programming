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

	for (src_len = 0; dest[src_len] != '\0'; src_len++)
		;

	for (i = 0; src[i] && i < n; i++)
	{
		if (i == src_len || src[i] == '\n')
		{
			dest[i] = '\0';
			continue;
		}
		dest[i] = src[i];
	}

	return (dest);
}
