#include "lists.h"

/**
 * get_nodeint_at_index - return the node in an index in a linked list
 * @head: tHE first node in linked list
 * @index: index of the node to BE returned
 * Return: the pointer to the node that we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int jay = 0;
listint_t *temp = head;

while (temp && jay < index)
{
	temp = temp->next;
	jay++;
}

return (temp ? temp : NULL);
}


