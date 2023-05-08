#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @needle: first occurence of the substring
 * @haystack: longer string to search
 * Return: a pointer to the beginning of located substring or
 * null if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
