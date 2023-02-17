#include <stdio.h>
/**
 * main - main entry point of program
 * @void - No argument expected
 *
 * Description: Print in reverse, the lower case alphabets
 * Return: 0 on successful program execution
 */

int main(void)
{
	int i = 122;

	for (; i > 96; i--)
		putchar(i);
	putchar(10);
	return (0);
}
