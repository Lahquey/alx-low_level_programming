#include "lists.h"

/**
 * delete_nodeint_at_index - eliminates a node within a linked list at a specific position
 * @head: reference to the first element in the list
 * @index: position of the node to be removed
 *
 * Return: 1 (Operation successful), or -1 (Operation failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	// Check if the list is empty
	if (*head == NULL)
		return (-1);

	// Handle the case of deleting the first node
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	// Traverse the list to the desired position
	while (i < index - 1)
	{
		// Ensure we're within valid node range
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	// Store the node to be removed
	current = temp->next;
	// Update pointers to bypass the node to be removed
	temp->next = current->next;
	free(current);

	return (1);
}

