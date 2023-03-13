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

	/* first, get the length of str */
	for (; str[slen]; slen++)
		;
	if (slen == 0)
	{
		return (NULL);
	}
	/* allocate memory with size slen */
	nstr = malloc(sizeof(char) * slen);

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
