#include "main.h"

/**
 * string_toupper - converts an input string to upper case
 * @str: string to convert
 * Return: Pointer to converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			continue;
		}
	}

	return (str);
}
