#include "main.h"

/**
 * puts_half - print second half of string
 * @str: string parameter inputted
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n;

	while  (str[i] != '\0')
	{
		i++;
	}
	n = (i + 1) / 2;
	if (i % 2 == 0)
	{
		while (n >= 0)
		{
			_putchar(str[i-(n-1)]);
			n--;
		}
	}
	else
	{
		while (n >= 0)
		{
			_putchar(str[i-n]);
			n--;
		}
	}
}
