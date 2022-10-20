#include "main.h"

/**
 * print_times_table - prints toime table of 9
 * @n: intger defining multiplication maximum
 * Return: no value, it is void
 */

void print_times_table(int n)
{
	int a, b, p;

	if ((n >= 0) && (n <= 15))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar(b + 48);
					continue;
				}
				p = a * b;
				_putchar(',');
				_putchar(' ');
				if (p >= 10)
				{
					_putchar(p / 10 + 48);
					_putchar(p % 10 + 48);
				}
				else if (p >= 100)
				{
					_putchar(p / 100 + 48);
					_putchar(p / 10 + 48);
					_putchar(p % 10 + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(p + 48);
				}
			}
		}
		_putchar('\n');
	}
}
