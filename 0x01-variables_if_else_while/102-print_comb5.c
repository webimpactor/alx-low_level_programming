#include <stdio.h>

/**
 * main- program entry point
 * Return:0 if no errors, non zero if errors
*/

int main(void)
{

	int i;
	int j;

	for (i = 0; i < 99; i++)
	{
		for (j + i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);

			putchar(' ');

			putchar('0' + j / 10);
			putchar('0' + j % 10);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
