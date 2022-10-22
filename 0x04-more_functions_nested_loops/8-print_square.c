#include "main.h"

/**
 * print_square - function prints a square of size 'size'
 * @size: size of the sqaure
 * Return: void
 */

void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
