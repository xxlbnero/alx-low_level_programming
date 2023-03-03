#include "main.h"

/**
 * rot13 - encodes a string using the rot13 algorithm
 * @str: string to encode
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];

		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		{
			c = ((c & ~32) - 'A' + 13) % 26 + 'A' | (c & 32);
		}

		str[i] = c;
	}
}
