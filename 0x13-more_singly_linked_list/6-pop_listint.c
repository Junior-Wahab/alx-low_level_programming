#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The data from the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *popped; // Declare a pointer for the node to be deleted.
    int content;

    if (*head == NULL)
    {
        return (0); // Return 0 if the list is empty.
    }

    popped = *head; // Store the head node in 'popped'.
    content = popped->n; // Retrieve the data from the head node.
    free(popped); // Free the memory of the head node.

    *head = (*head)->next; // Move the head to the next node.

    return (content); // Return the data from the deleted node.
}
