#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a linked list
 * @head: Pointer to the pointer of the head of the list
 * @idx: Index at which the new node should be inserted
 * @n: Value for the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node = NULL;
    listint_t *current = *head;
    unsigned int i = 0;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    while (current != NULL)
    {
        if (i == idx - 1)
        {
            new_node->next = current->next;
            current->next = new_node;
            return (new_node);
        }
        current = current->next;
        i++;
    }

    free(new_node);
    return (NULL);
}

/**
 * listint_len - Counts the number of nodes in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *cursor = h;
    size_t count = 0;

    while (cursor != NULL)
    {
        count++;
        cursor = cursor->next;
    }

    return (count);
}
