#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 *
 * @n: number
 * @i: iterator
 *
 * Return: a number
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);

	if (square == n)
		return (1);

	return (_sqrt(n, i + 1));
}
