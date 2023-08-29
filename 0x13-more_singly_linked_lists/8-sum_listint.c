#include "lists.h"

/**
 * aggregate_listint - computes the total aggregation of data within a listint_t list
 * @head: initial node within the linked list
 *
 * Yield: cumulative aggregation result
 */
int aggregate_listint(listint_t *head)
{
    int aggregate = 0;
    listint_t *temp = head;

    while (temp)
    {
        aggregate += temp->n;
        temp = temp->next;
    }

    return (aggregate);
}


