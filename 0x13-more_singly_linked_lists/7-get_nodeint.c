#include "lists.h"

/**
 * seek_nodeint_at_index - Retrieve the node located at a specified index within a linked list.
 * @head: Pointer to the first node in the linked list.
 * @index: Index of the desired node to retrieve.
 *
 * Resolves: Pointer to the sought-after node, or NULL if not found.
 */
listint_t *seek_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *temp = head;

    // Traverse through the linked list until reaching the desired index or the end.
    while (temp && i < index)
    {
        temp = temp->next;
        i++;
    }

    // Return the node at the specified index if found, otherwise return NULL.
    return (temp ? temp : NULL);
}

