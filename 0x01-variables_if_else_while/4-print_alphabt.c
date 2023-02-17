#include <stdio.h>
/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print the alphabet exceptp e and q
 *
 * Return: 0 on successful execution of program
 */

int main(void)
{
	int i = 97;
	
	while (i < 123)
	{
		if (i != 101 && i != 113)
			putchar(i);
		i = i + 1;
	}
	putchar(10);
	return (0);
}
