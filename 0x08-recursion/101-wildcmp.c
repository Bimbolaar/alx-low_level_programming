#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function that compares 2 identical strings
 * @s1: string_1 base address
 * @s2: string_2 base address
 * Return: 1 if strings are identical, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
