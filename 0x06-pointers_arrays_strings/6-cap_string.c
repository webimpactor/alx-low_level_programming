#include "main.h"

/**
 * cap_string - Capitaliozes all words of a string
 * @str: pointer to string
 * Return: character
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\n'
		|| str[i - 1] == '\t' || str[i - 1] == ','
		|| str[i - 1] == ';' || str[i - 1] == '!'
		|| str[i - 1] == '?' || str[i - 1] == '"'
		|| str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '{' || str[i - 1] == '}'
		|| str[i - 1] == '.')
		&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[0] >= 97 && str[0] <= 122))
		{
			str[0] = str[0] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
