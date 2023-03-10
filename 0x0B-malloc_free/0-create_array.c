#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: character to fill up array
 * Return: pointer to newly created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mchar;

	mchar = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	mchar = malloc(sizeof(char) * size);

	if (mchar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mchar[i] = c;
	}
	return (mchar);
}
