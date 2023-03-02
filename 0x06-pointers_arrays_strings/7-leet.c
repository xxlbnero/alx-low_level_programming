#include "main.h"

/**
 * leet - encode a given string according to the rules
 * @str: string to encode
 * Return: Pointer to encoded string
 */

char *leet(char *str)
{
	int i, j, encoded;
	char ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		encoded = 0;
		ch = str[i];
		if (ch >= 'a' && ch <= 'z')
		{
			ch -= 'a' - 'A';
		}
		for (j = 0; j < 6; j++)
		{
			if (ch == "AEIOST"[j])
			{
				encoded = 1;
				break;
			}

			continue;
		}
	}
}
