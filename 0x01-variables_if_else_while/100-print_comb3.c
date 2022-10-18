#include <stdio.h>

/**
 * main- program entry point
 * Return: 0 -if no errors, non zero if error.
*/

int main(void)
{
	int i;
	int j;
	int c = '1';

	for (i = '0'; i < '9'; i++)
	{
		for (j = c; j <= '9'; j++)
		{
			putchar (i);
			putchar (j);
			if (!(i == '8' && j == '9'))
			{
				putchar (',');
				putchar (' ');
			}
			else
			{
				break;
			}
		}
		c++;
	}
	return (0);
}
