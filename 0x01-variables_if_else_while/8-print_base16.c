#include <stdio.h>
/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print all numbers of base 16 in lowercase
 * Return: 0 on successful execution of program
 */

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i = i + 1;
	}
	putchar(10);
	return (0);
}
