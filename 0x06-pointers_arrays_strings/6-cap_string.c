#include "main.h"

/**
 * *cap_string - Capitalize every word in a string
 * @str: String to capitalize
 * Return: Pointer to capitalized string
 */

char *cap_string(char *str)
{
	int i;
	int flag;

	flag = 0;	/* determine when we hit delimiters */

	/* Always check for the first element */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	/* check the rest */
	for (i = 1; str[i] != '\0'; i++)
	{
		if (flag)	/* delimeter match in i-1 iteration */
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i]  -= 32;
			}
			/* dont forget to reset flag */
			flag = 0;
		}
		/* Now the delimeters */
		if (str[i] == 9 || str[i] == 10 || str[i] == 32 || str[i] == 44
		|| str[i] == 58 || str[i] == 59 || str[i] == 33 || str[i] == 34
		|| str[i] == 63 || str[i] == 40 || str[i] == 41 || str[i] == 123
		|| str[i] == 125 || str[i] == 46)
		{
			/* delimiter found. Turn on the flag */
			flag = 1;
		}
	}

	return (str);
}
