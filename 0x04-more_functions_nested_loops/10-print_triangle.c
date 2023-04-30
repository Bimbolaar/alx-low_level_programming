#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of a triangle
 * If size is 0 or less, function should print only a new line
 * use character # to print the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
