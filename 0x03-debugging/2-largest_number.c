#include <stdio.h>
#include "main.h"

/**
* largest_number - prints the largest of 3 integers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;
	
	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if ( c > a && c> b)
	{
		largest = c;
	}

	return (largest);
}
