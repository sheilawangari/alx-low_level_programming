#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and set head to NULL
 * @head: Head of the list
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	for (; *head != NULL;)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}

