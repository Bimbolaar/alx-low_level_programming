#include "main.h"
#include <stdio.h>
/**
 * sqroot - checks number to evaluate from 1 to n
 * @a: same as n
 * @b: number that iterates from 1 to n
 *
 * Return: -1 on error
 */
int sqroot(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqroot(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number integer
 *
 * Return: 1 on success, -1 on error
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
