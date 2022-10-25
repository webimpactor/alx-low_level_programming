#include "main.h"

/**
 * _puts - prints string values
 * @str: string to be printed to stdout
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
