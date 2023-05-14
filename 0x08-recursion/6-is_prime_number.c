#include "main.h"
#include <stdio.h>

/**
 * checker - checks to see if number is prime
 * @a: integer
 * @b: integer
 * Return: int
 */
int checker(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - states if input integer is a prime number
 * @n: integer
 * Return: 1 if input integer is a prime number, otherwise return o
 */

int is_prime_number(int n);
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
