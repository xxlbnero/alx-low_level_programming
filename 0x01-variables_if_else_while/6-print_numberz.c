#include <stdio.h>
/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print digits from 0 - 9 V2
 * Return: 0 on successful program execution
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
