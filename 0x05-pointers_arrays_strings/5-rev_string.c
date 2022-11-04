#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char str[10];
	int c = 0;
	int tmp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		continue;
	}
	i = i - 1;
	tmp = i;
	while (i >= 0)
	{
		str[c] = *(s + i);
		i--;
		c++;
	}
	c = 0;
	for (i = 0; i <= tmp; i++)
	{
		*(s + i) = str[c];
		c++;
	}
}
