#include "main.h"

/**
 * print_alphabet - Print the letters of alphabet
 * @void - No argument required
 *
 * Description: Function definition to print the letters of the alphabet
 * Return: 0 on successful execution of program
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
