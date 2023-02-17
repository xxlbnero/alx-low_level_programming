#include <stdio.h>
/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print digit from 0 to 9
 * Return: 0 on successful execution of program
 */

int main(void)
{
	int i;

	i = 48;
	for (; i < 58; i++)
		putchar(i);
	putchar(10);

	return (0);
}
