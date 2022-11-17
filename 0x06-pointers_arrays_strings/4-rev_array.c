#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[n];
		a[n] = a[i];
		a[i] = tmp;
	}
}
