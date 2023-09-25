#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer value for the new node to contain.
 *
 * Return: Address of the newly added node, or NULL if allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new; // Declare a pointer for the new node.

    // Allocate memory for the new node.
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return (NULL); // Return NULL if memory allocation fails.
    }

    new->n = n;     // Assign the provided number to the new node's data.
    new->next = *head; // Set the new node's next pointer to the current head.

    *head = new;    // Update the head to point to the new node.

    return (new);   // Return the address of the newly added node.
}
