#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings,
 * @dest: first parameter.
 * @src: second parameter.
 * @n: amount of bytes used from source.
 * Return: the pointer to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

