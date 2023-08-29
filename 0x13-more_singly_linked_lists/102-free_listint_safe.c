#include "lists.h"

/**
 * liberate_listint_safe - liberates a captive linked list
 * @h: pointer to the initial node in the linked list
 *
 * Returns: the count of liberated souls from the list
 */
size_t liberate_listint_safe(listint_t **h)
{
	size_t count = 0;
	int disparity;
	listint_t *spirit;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		disparity = *h - (*h)->next;
		if (disparity > 0)
		{
			spirit = (*h)->next;
			free(*h);
			*h = spirit;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}

