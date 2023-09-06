#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies string to newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str);
{
	int i, r = 0;
	char *aaa;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;


	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
