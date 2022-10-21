#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: integer being checked
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	int v;

	if (c >= '0' && c <= '9')
	{
		v = 1;
	}
	else
	{
		v = 0;
	}
	return (v);
}
