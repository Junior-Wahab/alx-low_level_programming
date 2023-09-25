#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
    size_t nodes = 0;

    for (; h != NULL; h = h->next)
    {
        nodes++;
    }

    return nodes;
}
