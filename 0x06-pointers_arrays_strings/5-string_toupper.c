#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
