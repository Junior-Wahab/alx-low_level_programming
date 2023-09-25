#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a linked list.
 * @head: Pointer to the address of the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Integer value for the new node.
 *
 * Return: Address of the new node if successful, or NULL if an error occurs.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node = NULL;       // Declare a pointer for the new node.
    listint_t *previous_node = NULL;  // Declare a pointer for the previous node.
    unsigned int i = 0;              // Initialize an index counter.

    new_node = malloc(sizeof(listint_t));  // Allocate memory for the new node.
    if (new_node == NULL || idx > listint_len(*head))
    {
        free(new_node);
        return (NULL);  // Return NULL if memory allocation fails or the index is out of range.
    }

    new_node->n = n;        // Assign the provided value to the new node's data.
    new_node->next = NULL;  // Initialize the new node's next pointer to NULL.

    while (*head != NULL)
    {
        if (i == idx)
        {
            if (i == 0)
            {
                new_node->next = *head;
                *head = new_node;
                return (new_node);  // Insert at the beginning and return the new node.
            }
            new_node->next = previous_node->next;
            previous_node->next = new_node;
            return (new_node);  // Insert at the specified index and return the new node.
        }
        else if ((i + 1) == idx)
        {
            previous_node = *head;  // Store the previous node when approaching the target index.
        }
        head = &((*head)->next);
        i++;
    }

    return (NULL);  // Return NULL if the new node was not inserted.
}

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    const listint_t *cursor = h;
    size_t count = 0;

    while (cursor != NULL)
    {
        count += 1;
        cursor = cursor->next;
    }

    return (count);
}
