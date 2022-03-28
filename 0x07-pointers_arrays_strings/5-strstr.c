#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate from string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *x = needle, *y = haystack;

	while (*y)
	{
		x = needle;
		y = haystack;
		while (*x)
		{
			if (*y == *x)
			{
				x++;
				y++;
			}
			else
				break;
		}
		if (*x == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

