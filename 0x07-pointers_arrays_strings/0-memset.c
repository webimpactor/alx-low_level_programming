#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: unsigned integer that defines amount of memory
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
