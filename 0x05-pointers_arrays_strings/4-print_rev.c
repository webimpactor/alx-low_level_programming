#include "main.h"

/**
 * print_rev - prints characters of string in reverse order
 * @s: string to be processed
 * Description: prints characters of string in reverse order
 * Return: void
 */

void print_rev(char *s)
{
	int rem, len, c;

	len = 0;
	rem = 0;

	for (c = 0; s[c] != '\0'; ++c)
	{
		len = c;
	}
	for (; len >= rem; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
