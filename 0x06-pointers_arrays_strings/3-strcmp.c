#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return: A pointer to the resulting string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		/* if characters differ, or end of the second string is reached */
		if (*s1 != *s2)
			break;

		/* move to the next pair of characters */
		s1++;
		s2++;
	}

	/* return the ASCII difference after converting `char*` to `unsigned char*` */
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);

}

