#include <stdio.h>
/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print the alphabet in lower and upper case
 *
 * Return: 0 on successfull execution of program
 */

int main(void)
{
	int i, j;

	i = 97;   // lower case a
	j = 65;    // upper case A

	while (i < 123)
	{
		putchar(i);
		i = i + 1;
	}
	while (j < 91)
	{
		putchar(j);
		j = j + 1;
	}
	putchar(10);
	return (0);
}
