#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: integer one
 * @b: integer two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int placeHolder;

	placeHolder = *a;
	*a = *b;
	*b = placeHolder;
}
