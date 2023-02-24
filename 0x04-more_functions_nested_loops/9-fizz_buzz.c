#include <stdio.h>

/**
 * main - Print numbers from 1 to 100 substituting multiples of 3 and 5
 * with specified text
 * @void: No argument required
 * Return: Null
 */

void main(void)
{
	char *mul_three[] = {"Fizz"};
	char *mul_five[] = {"Buzz"};
	char *mul_three_five[] = {"FizzBuzz"};

	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
