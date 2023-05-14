#include "main.h"
#include <stdio.h>

/**
 * checker - checks for the square root
 * @a: integer
 * @b: integer
 *
 * Return: int, square root
 */
int checker(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (checker(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: square root, if no natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker(1, n));
}
