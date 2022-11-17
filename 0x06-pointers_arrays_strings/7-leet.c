#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: source string
 * Return: character
 */

char *leet(char *str)
{
	int a;
	int b;
	int c;
	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (str[a] == l[b])
			{
				c = b;
				str[a] = e[c];
			}
		}
	}
	return (str);
}
