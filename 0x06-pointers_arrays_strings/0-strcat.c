#include "main.h"

/**
 * _strcat - Given two strings, concatenate them.
 * @dest: to destination
 * @src: from source
 * Return: Pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int last_el = _getLen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[last_el + i] = src[i];
	}
	return (dest);


}
