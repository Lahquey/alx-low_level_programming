#include "lists.h"

/**
 * seek_listint_loop - Embarks on a journey to unveil the mystical loop within a linked list.
 * @head: The noble starting point of our adventure.
 *
 * Return: The sacred address where the loop's secrets reveal themselves, or NULL if none.
 */
listint_t *seek_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}

