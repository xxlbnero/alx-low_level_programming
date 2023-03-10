#include <stdio.h>

/**
 * main - print all argument received
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on successful execution of program
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

