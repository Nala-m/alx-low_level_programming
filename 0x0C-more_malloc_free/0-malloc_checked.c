#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 *
 * @b: amount of bytes
 *
 * Return: pointer to alloc memory on success, 98 on failure
 *
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
