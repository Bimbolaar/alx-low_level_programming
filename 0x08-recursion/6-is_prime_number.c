#include "main.h"
#include <stdio.h>
/**
 * primenum - checks if the number from 1 to n is prime
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: 1 on success, -1 on error
 */
int primenum(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (primenum(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number integer
 *
 * Return: 1 On success, -1 on error
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenum(n, 2));
}
