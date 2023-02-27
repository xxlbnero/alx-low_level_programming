#include "main.h"

/**
 * _strcpy - copy a string from soruce to destination including the terminatin
 * character
 * @dest: destination pointer of copy operation
 * @src: Source pointer of copy operation
 * Return: Pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';

	return (dest);
}
