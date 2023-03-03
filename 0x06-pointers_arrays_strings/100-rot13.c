#include "main.h"

/**
 * rot13 - encodes a string using the rot13 algorithm
 * @str: string to encode
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	char sub[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;
	char cur_char;

	for (i = 0; str[i] != '\0'; i++)
	{
		cur_char = str[i];
		for (j = 0; j < 52; j++)
		{
			if (sub[j] == cur_char)
			{
				str[i] = code[j];
			}
		}
	}

	return (str);
}
