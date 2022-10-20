#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 * Descripton: prints natural numbers from n to 98
 * @n: integer to start print from
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(",");
			printf(" ");
			n++;
		}
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(",");
			printf(" ");
			n--;
		}
	}
	printf("\n");
}
