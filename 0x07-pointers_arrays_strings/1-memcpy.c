#include "main.h"

/**
 * _memcpy - Copies memory area
 * @src: Fromt source
 * @dest: To destination
 * @n: n number of bytes
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
			*(dest++) = *(src++);
			--n;
		}
	}

	return (dest);
}
