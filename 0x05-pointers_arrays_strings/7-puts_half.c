#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: pointer to string
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int i;
	int l;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		continue;
	}
	l = i + 1;
	if (l % 2 == 0)
	{
		n = l / 2;
		while (n <= i)
		{
			_putchar(*(str + n));
			n++;
		}
	}
	else
	{
		n = (l - 1) / 2;
		while (n <= i)
		{
			_putchar(*(str + n));
			n++;
		}
	}
	_putchar('\n');
}
