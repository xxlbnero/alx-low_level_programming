#include "main.h"

/**
 * _strdup - copy a string and return a pointer to new space
 * @str: input string
 * Return: pointer to newly allocated string
 */

char *_strdup(char *str)
{
	int slen, i;
	char *nstr;

	slen = 0;
	nstr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	/* first, get the length of str */
	for (; str[slen]; slen++)
		;
	if (slen == 1)
	{
		return ("\0");
	}
	/* allocate memory with size slen */
	nstr = malloc(sizeof(char) * slen + 1);

	/* NULL check */
	if (nstr == NULL)
	{
		return (NULL);
	}
	/* perform the copy operation */
	for (i = 0; i < slen; i++)
	{
		nstr[i] = str[i];
	}

	return (nstr);	/* new copy oof str */
}
