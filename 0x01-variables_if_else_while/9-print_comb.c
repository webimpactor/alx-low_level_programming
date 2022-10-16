#include <stdio.h>

/**
 * main- entry point of program
 * Return: 0 if no error, non zero if error.
*/

int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(i);
	return (0);
}
