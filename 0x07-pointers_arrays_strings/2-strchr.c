#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurence of the character in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
