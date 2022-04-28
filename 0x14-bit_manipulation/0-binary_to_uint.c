#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: NULL if b is NULL, 0 if b contains chars not 0 or 1.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}

