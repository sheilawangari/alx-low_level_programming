#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: a pointer to the first occurrence of c
 * or null if character is not found.
 */
char *_strchr(char *s, char c)
{
	char *p;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			p = &s[j];
			break;
		}
	}
	if (s[j] == c)
	{
		p = &s[j];
		return (p);
	}
	else
		return (NULL);
}

