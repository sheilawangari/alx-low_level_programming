#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int x = '0';

	for (; x <= '9'; x++)
		_putchar(x);
	_putchar('\n');

}

