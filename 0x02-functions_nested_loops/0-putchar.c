#include "main.h"

/**
 * main - main entry point of program
 * @void - No argument required
 *
 * Descritpion: A program to print a text to screen
 * Return: 0 on successful execution of program
 */

int main(void)
{
	char s[] = {"_putchar"};
	int count = 0;	/* for indexing each char in s */

	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count += 1;
	}
	_putchar('\n');

	return (0);
}
