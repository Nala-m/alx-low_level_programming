#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
