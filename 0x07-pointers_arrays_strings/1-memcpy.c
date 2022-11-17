#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n: amount of memory
 * Return: character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
