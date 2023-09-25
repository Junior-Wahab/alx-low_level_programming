#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 *
 * Return: sum of the numbers in the list
 */
int sum_listint(listint_t *head)
{
    listint_t *current = head;
    int sum = 0;

    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    return sum;
}
