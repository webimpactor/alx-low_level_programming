#include <stdio.h>

/**
 * main- entry point of program
 * Return: 0 -if no error, Non zero if error.
*/

int main(void)
{
	int i = 0;
	char a;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
