#include "main.h"

/**
 * leet - encode a given string according to the rules
 * @str: string to encode
 * Return: Pointer to encoded string
 */

char *leet(char *str)
{
	int i, j;
	char cur_char;

	char sub[] = "AaEeOoTtLl";
	char code[] = "4433007711";

	/* loop through and scan each character */
	for (i = 0; str[i] != '\0'; i++)
	{
		cur_char = str[i];
		for (j = 0; j < 10; j++)
		{
			if (sub[j] == cur_char)
			{
				str[i] = code[j];
			}
		}
	}

	return (str);
}
