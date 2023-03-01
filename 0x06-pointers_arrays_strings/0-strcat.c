#include "main.h"

/**
 * _strcat - Given two strings, concatenate them.
 * @dest: to destination
 * @src: from source
 * Return: Pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int last_el;
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);


}
