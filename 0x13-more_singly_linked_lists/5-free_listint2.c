#include "lists.h"

/**
 * liberate_listint2 - bids farewell to a linked list
 * @head: pointer to the listint_t list that shall be released
 */
void liberate_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

