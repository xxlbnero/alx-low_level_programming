#include <stdio.h>

/**
 * main - Print numbers from 1 to 100 substituting multiples of 3 and 5
 * with specified text
 * @void: No argument required
 * Return: 0 on successful execution of code
 */

int main(void)
{
	char *mul_three[] = {"Fizz"};
	char *mul_five[] = {"Buzz"};
	char *mul_three_five[] = {"FizzBuzz"};

	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i == 100) && (i % 5 == 0))
		{
			printf("%s", *mul_five);
			break;
		}
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", *mul_three_five);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", *mul_three);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", *mul_five);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
