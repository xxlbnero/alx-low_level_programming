#include "main.h"

/**
 * _strncat - Concatenate two strings upto n bytes
 * @dest: to destination
 * @src: from source
 * @n: up to n bytes
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}

	return (dest);
}
