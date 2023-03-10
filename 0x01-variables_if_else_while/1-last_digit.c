#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main entry point of program
 *@void - No argument expected
 *
 * Description: Print last digit in randomly genrated number alongside extras
 *
 * Return: 0 on successful execution of program
 */

int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	if (l_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	else if (l_digit < 6 && l_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",	n, l_digit);
	return (0);
}
