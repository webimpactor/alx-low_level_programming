#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int v;

	if (c >= 'A' && c <= 'Z')
	{
		v = 1;
	}
	else
	{
		v = 0;
	}
	return (v);
}
