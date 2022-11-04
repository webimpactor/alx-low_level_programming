#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		continue;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
