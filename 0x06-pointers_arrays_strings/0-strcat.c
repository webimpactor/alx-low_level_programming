#include "main.h"

/**
 * _strcat - Appends source string to destination string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		continue;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
