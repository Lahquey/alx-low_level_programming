#include "lists.h"

/**
 * insert_nodeint_at_index - Incorporates a fresh node into a linked list,
 * positioned at a specified index.
 * @head: Reference to the initial node in the list.
 * @idx: Index where the new node is to be introduced.
 * @n: Data to be infused into the new node.
 *
 * Returns: A pointer to the newly added node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

