#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node required.
 *
 * Return: The address of the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *cursor = NULL; // Declare a pointer to the node.
    unsigned int i = 0; // Initialize an index counter.

    while (head != NULL)
    {
        if (i <= index)
        {
            if (i == index)
            {
                cursor = head; // Assign the address of the node to 'cursor'.
                break; // Exit the loop when the desired index is reached.
            }
            head = head->next; // Move to the next node.
            i++; // Increment the index counter.
        }
        else
        {
            return (NULL); // Return NULL if the index is out of range.
        }
    }

    return (cursor); // Return the address of the node at the specified index.
}
