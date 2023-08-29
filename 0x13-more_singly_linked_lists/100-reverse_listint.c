#include "lists.h"

/**
 * reverse_listint - performs the incredible feat of reversing a linked list
 * @head: the majestic pointer to the first node in the list
 *
 * Returns: a triumphant pointer to the first node in the newly conquered list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	// Embark on the noble journey of list reversal
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;  // The throne of the reversed list is claimed

	return (*head);  // Presenting the spoils of the conquest
}

