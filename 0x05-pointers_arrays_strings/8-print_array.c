#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: pointer to array
 * @n: number of array elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", *(a + i));
		printf(", ");
	}
	printf("%d", *(a + i));
	printf("\n");
}
