#include "main.h"

/**
 * print_alphabet- print all alphabets in lowercase
 * Return: 0 if success
*/

void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
