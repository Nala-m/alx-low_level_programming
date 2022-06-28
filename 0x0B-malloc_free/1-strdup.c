#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string and sets a pointer to duplicate
 *
 * @str: string to copy
 *
 * Return: a pointer to duplicate string or else NULL
 *
 */
char *_strdup(char *str)
{
	char *result;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	result = malloc(sizeof(char) * (i + 1));

	result = _strdup(str);
	return (result);
}

