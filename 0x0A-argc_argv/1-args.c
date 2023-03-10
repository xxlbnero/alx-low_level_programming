#include <stdio.h>

/**
 * main - Print the number of argument passed
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on successful execution of program
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
}

