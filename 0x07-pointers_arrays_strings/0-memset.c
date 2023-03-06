#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: buffer to fill
 * @b: char to fill buffer with
 * @n: n number of bytes to fill
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] || i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
