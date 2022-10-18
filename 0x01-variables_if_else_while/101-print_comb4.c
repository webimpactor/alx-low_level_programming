#include <stdio.h>

/**
 * main- program entry point
 * Return: 0 -if no errors, non zero if error.
*/

int main(void)
{
	int x;
	int y;
	int z;
	int c = '1';
	int k = '2';

	for (x = '0'; x <= '7'; x++)
	{
		for (y = c; y <= '8'; y++)
		{
			for (z = k; z <= '9'; z++)
			{
				putchar (x);
				putchar (y);
				putchar (z);
				if (!(x == '7' && y == '8' && z == '9'))
				{
					putchar (',');
					putchar (' ');
				}
				else
				{
					break;
				}
			}
			k++;
		}
		c++;
	}
	putchar ('\n');
	return (0);
}
