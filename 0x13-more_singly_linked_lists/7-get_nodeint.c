#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node required
 *
 * Return: The address of the node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *cursor = NULL;
    unsigned int i = 0;

    while (head != NULL)
    {
        if (i <= index)
        {
            if (i == index)
            {
                cursor = head;
                break;
            }
            head = head->next;
            i++;
        }
        else
            return (NULL);
    }

    return (cursor);
}
