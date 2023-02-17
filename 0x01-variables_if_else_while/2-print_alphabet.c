#include <stdio.h>

/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print the letters of the alphabet using the putchar function
 *
 * Return: 0 on successful execution of program
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i = i + 1;
	}
	putchar(10);
	return (0);
}
