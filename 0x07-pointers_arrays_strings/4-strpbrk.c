#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the string containing bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
