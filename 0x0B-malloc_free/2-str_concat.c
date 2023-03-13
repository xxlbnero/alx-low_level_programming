#include "main.h"

/**
 * getlen - return the length of a string
 * @s: input string
 * Return: number of chracters in s
 */

int getlen(char *s)
{
	int count;

	for (count = 0; s[count] count++)
		;
	return (count);
}


/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 * Return: pointer to s1 + s2 in a new string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len;
	char *nstr;

	s1_len = getlen(s1);
	s2_len = getlen(s2);

	nstr = malloc(sizeof(char) * (s1_len + s2_len) + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		nstr[0] = "";
	}
	else
	{
		for (i = 0; s1[i]; i++)
		{
			nstr[i] = s1[i];
		}
	}
	if (s2 == NULL)
	{
		nstr[i + 1] = "";
	}
	else
	{
		for (j = 0; s2[j]; j++)
		{
			nstr[i + j] = s2[j];
		}
	}
	return (nstr);
}
