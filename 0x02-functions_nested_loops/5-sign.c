#include "main.h"

/**
 * print_sign - prints the sign of a num
 * @n: integer that will be tested
 * Function checks the signs of integers
 * Return: 1 if pos and -1 if neg.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
