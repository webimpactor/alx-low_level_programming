#include "main.h"

/**
 * print_last_digit - prints last didgit of an integer
 * @n: integer to print last digit of
 * Return: 0 if success
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
