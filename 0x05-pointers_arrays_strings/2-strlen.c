#include "main.h"

/**
 * _strlen - function to calculate string length
 * @s: string pointer
 * Return: the string length
 */

int _strlen(char *s)
{
	int i = 0;
	int len;

	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i;
	return (len);
}
