#include <stdio.h>

/**
 * main - program entry
 * Return: 0 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % 3) != 0) && ((i % 5) == 0))
		{
			printf("Buzz");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
