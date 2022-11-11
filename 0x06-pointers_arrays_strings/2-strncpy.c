#include "main.h"
/**
 * _strncpy - copy string from source to destination
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of characters to be copied from source string
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
		}
		else if (*(src + i) == '\0')
		{
			*(dest + i) = '\0';
			break;
		}
	}
	return (dest);
}
