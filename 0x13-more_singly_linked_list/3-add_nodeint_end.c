#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list.
 * @head: Pointer to the head of the list.
 * @n: Number to be used as content for the new node.
 *
 * Return: Address of the newly added node, or NULL if allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;    // Declare a pointer for the new node.
    listint_t *cursor = *head; // Declare a cursor to traverse the list.

    // Allocate memory for the new node.
    new_node = malloc(sizeof(listint_t));
    if (new_node != NULL)
    {
        new_node->n = n;       // Assign the provided number to the new node's data.
        new_node->next = NULL; // Initialize the new node's next pointer to NULL.
    }
    else
    {
        return (NULL); // Return NULL if memory allocation fails.
    }

    // If the list is not empty, traverse to the end and add the new node there.
    if (cursor != NULL)
    {
        while (cursor->next != NULL)
        {
            cursor = cursor->next; // Move the cursor to the next node.
        }
        cursor->next = new_node; // Attach the new node to the last node in the list.
    }
    else
    {
        *head = new_node; // If the list is empty, set the new node as the head.
    }

    return (new_node); // Return the address of the newly added node.
}
