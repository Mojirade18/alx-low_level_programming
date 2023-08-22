#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start = (length + 1) / 2;

	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}

	_putchar('\n');
}
