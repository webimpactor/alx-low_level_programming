#include "main.h"

/**
 * print_diagonal - print diagonal line of length n
 * @n: length of line
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int c;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
