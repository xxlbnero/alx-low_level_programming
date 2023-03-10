#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positivve numbers
 * @argc: argument count
 * @argv: argument list
 * Return: 0 on successful execution of program
 */

int main(int argc, char *argv[])
{
	int sum, i, int_val;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{

		for (i = 1; i < argc; i++)
		{
			int_val = atoi(argv[i]);

			if (int_val)
			{
				sum += int_val;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
