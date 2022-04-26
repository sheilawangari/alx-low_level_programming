#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Head of the list
 *
 * Return: Number of elements
 **/
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		;

	return (i);
}

