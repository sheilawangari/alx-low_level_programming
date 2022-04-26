#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head of the list
 * @n: Value of the new element
 *
 * Return: Adrress of the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (; *head != NULL; head = &(*head)->next)
		;
	new->n = n;
	new->next = NULL;
	*head = new;

	return (new);
}

