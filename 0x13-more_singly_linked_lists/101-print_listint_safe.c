#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of distinct nodes
 * in a circular listint_t linked list.
 * @head: A pointer to the head of the listint_t to evaluate.
 *
 * Return: If the list isn't circular - 0.
 * Otherwise - the count of unique nodes within the list.
 */
size_t looped_listint_len(const listint_t *head)
{
    const listint_t *tortoise, *hare;
    size_t unique_nodes = 1;

    if (head == NULL || head->next == NULL)
        return (0);

    tortoise = head->next;
    hare = (head->next)->next;

    while (hare)
    {
        if (tortoise == hare)
        {
            tortoise = head;
            while (tortoise != hare)
            {
                unique_nodes++;
                tortoise = tortoise->next;
                hare = hare->next;
            }

            tortoise = tortoise->next;
            while (tortoise != hare)
            {
                unique_nodes++;
                tortoise = tortoise->next;
            }

            return (unique_nodes);
        }

        tortoise = tortoise->next;
        hare = (hare->next)->next;
    }

    return (0);
}

/**
 * print_listint_safe - Displays a listint_t linked list securely.
 * @head: A pointer to the head of the listint_t linked list.
 *
 * Return: The count of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nodes_count, index = 0;

    nodes_count = looped_listint_len(head);

    if (nodes_count == 0)
    {
        for (; head != NULL; nodes_count++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }
    }
    else
    {
        for (index = 0; index < nodes_count; index++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
        }

        printf("-> [%p] %d\n", (void *)head, head->n);
    }

    return (nodes_count);
}

