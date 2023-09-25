#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Return: the address of the node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *cursor = head;
    unsigned int i = 0;

    while (cursor != NULL)
    {
        if (i == index)
        {
            return cursor;
        }
        cursor = cursor->next;
        i++;
    }

    return NULL; // Node not found at the specified index
}
