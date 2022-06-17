#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int result, count;

	count = 0;
	while (s1[count] != '\0' && s1[count] == s2[count])
		count++;
	result = s1[count] - s2[count];
	return (result);
}

