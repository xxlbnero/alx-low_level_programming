#include <stdio.h>

/**
 * main - Print the number of argument passed
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on successful execution of program
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}

