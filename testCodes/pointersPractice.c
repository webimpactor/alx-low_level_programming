#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc)
{
	*cc = 'o';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modif_my_char_var(p);
	printf("Value of 'c' after the call: %d\n", c);
	return (0);
}
