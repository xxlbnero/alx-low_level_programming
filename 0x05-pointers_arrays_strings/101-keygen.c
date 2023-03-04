#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STRING_LENGTH 256

void _strcat(char *dest, char *src);
char *rand_str(char *);
/**
 * main - Main entry point of program
 * void: no argument expected
 * Return: 0 on successful execution of code
 */


int main(void)
{
	char *str_pass;
	char str_prog_name[] = "./101-crackme ";

	srand(time(NULL));

	while (1)
	{
		str_pass = rand_str(str_pass);
		_strcat(str_prog_name, str_pass);

		if (!system(str_prog_name))
		{
			break;
		}
	}

	return (0);
}


/**
 * rand_str - Generate a random character string and return it
 * @res: result of generated string
 * Return: Pointer to result
 */

char *rand_str(char *res)
{
	char random_string[MAX_STRING_LENGTH + 1];
	int string_length, i;

	string_length = rand() % MAX_STRING_LENGTH + 1;

	for (i = 0; i < string_length; i++)
	{
		int random_num = rand() % 62;

		if (random_num < 26)
		{
			random_string[i] = 'A' + random_num;
		}
		else if (random_num  < 52)
		{
			random_string[i] = 'a' + (random_num - 26);
		}
		else
		{
			random_string[i] = '0' + (random_num - 52);
		}
	}

	random_string[string_length] = '\0';
	res = random_string;

	return (res);
}


/**
 * _strcat - given two strings, concatenate them
 * @src: from source
 * @dest: to destination
 * Return: Null
 */
void _strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';
}
