#include "main.h"

/**
 * rev_string - reverses value of a string
 * @s: string to be reversed
 * Description: function to reverse the value of a given string
 * Return: void
 */

void rev_string(char *s)
{
	int c, temp, rem;

	c = 0;
	rem = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (c > rem)
	{
		temp = s[c];
		s[c--] = s[rem];
		s[rem++] = temp;
	}
}
