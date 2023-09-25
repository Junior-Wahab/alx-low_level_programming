#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
    size_t nodes = 0; // Initialize a counter for nodes to 0.

    while (h)
    {
        nodes++;    // Increment the node counter.
        h = h->next; // Move to the next node in the list.
    }

    return (nodes); // Return the total number of nodes.
}
