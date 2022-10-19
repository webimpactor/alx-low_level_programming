#include "main.h"

/**
 * times_table - prints toime table of 9
 * Return: no value, it is void
 */

void times_table(void)
{
	int a, b, p;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
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
			else
			{
				_putchar(' ');
				_putchar(p + 48);
			}
		}
		_putchar('\n');
	}
}
