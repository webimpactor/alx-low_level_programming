#include "main.h"

/**
 * print_triangle - Print triangle with #
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j =  i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
