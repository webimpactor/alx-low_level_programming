#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: first parameter
 * Return: 1 if character is alpha.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
