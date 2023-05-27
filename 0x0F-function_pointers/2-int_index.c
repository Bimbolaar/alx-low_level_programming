#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index -function that searches for an integer
 * @size: number of elements in the array
 * @cmp: is a pointer to the function used to compare values
 * @array: array that contains the elements
 * Return: index of the first element, where cmp does not return 0
 * if no element matches, return -1, if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
