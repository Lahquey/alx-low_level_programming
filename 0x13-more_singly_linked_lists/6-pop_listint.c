#include "lists.h"

/**
 * pop_listint - deletes the head node of the list linked
 * @head: Pointer to the first element i list linked
 * Return: returns the data inside the deleted elements
 * otherwise return 0 if the list empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int _num;

if (!head || !*head)
{
	return (0);
}

_num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (_num);
}

