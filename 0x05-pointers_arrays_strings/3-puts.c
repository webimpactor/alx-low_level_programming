#include "main.h"

/**
 * _puts - prints out a string to standard output
 * @str: pointer to string to be outputed
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
