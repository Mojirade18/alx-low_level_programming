#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
