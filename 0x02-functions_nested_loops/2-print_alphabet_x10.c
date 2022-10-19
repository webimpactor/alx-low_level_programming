#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: is void
 */

void print_alphabet_x10(void)
{
	char l;
	int c = 0;

	while (c < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		c++;
	}
}
