#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of characters to be added from source string
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		continue;
	}
	for (j = 0; j < n; j++)
	{
		if (*(src + j) != '\0')
		{
			*(dest + i) = *(src + j);
			i++;
		}
		else if (*(src + j) == '\0')
		{
			*(dest + i) = '\0';
			break;
		}
	}
	return (dest);
}
