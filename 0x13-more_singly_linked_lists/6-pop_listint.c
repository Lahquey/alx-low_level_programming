#include "lists.h"

/**
 * remove_list_head - Eliminates the initial node of a linked list
 * @head: Pointer to the initial element in the linked list
 *
 * Returns: The content within the node that was eradicated,
 * or 0 if the list happens to be devoid of elements
 */
int remove_list_head(listint_t **head)
{
	listint_t *temp;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (value);
}

