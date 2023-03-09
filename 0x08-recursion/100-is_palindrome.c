#include "main.h"

/**
 * str_len - returns the length os a given string
 * @s: input string
 * Return: length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}


/**
 * is_palindrome - checks if a string is palindrome
 * @s: input string
 * Return: 1 if true, 0 otherwise
 */

int is_palindrome(char *s)
{
	int l;

	l = str_len(s);
	if (l <= 1)
	{
		return (1);
	}
	if (s[0] != s[l - 1])
	{
		return (0);
	}
	s[l - 1] = '\0';
	return (is_palindrome(s + 1));
}
