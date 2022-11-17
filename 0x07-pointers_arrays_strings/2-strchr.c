#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: pointer to source string
 * @c: character to be located
 * Return: Pointer to first occurence of char c
 * or Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
