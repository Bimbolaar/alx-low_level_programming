#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first occurence in the string
 * @accept: matches one of the bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or Null if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s != '\0')
		{
			i = 0;
			while (accept[i] != '\0')
			{
				if (*s == accept[i])
				{
					return (s);
				}

				i++;

			}

			s++;
		}
		return (0);
}
