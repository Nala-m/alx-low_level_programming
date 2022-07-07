#include "variadic functions.h"

/**
 * sum_them_all - function that returns the sum of its param.
 *
 * @n: number of arguments.
 *
 * Return: sum else return 0.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}



