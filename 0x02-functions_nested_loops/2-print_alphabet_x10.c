#include "main.h"

/**
 * print_alphabet_x10 - Print the letters of the alphabet 10 times
 * @void - No argument required
 *
 * Description: Print the letters of the alphabet 10 times to standard output
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
