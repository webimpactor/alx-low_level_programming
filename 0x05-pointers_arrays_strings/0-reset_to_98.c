#include "main.h"

/**
 * reset_to_98 - Sets pointer value to an integer to 98
 * @*n: integer pointer
 * Return: void
 */

void reset_to_98(int *n)
{
	int v = 98;
	int *p;

	p = &v;
	*n = *p;
}
