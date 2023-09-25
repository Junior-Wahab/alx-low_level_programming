#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
    listint_t *cursor;
    listint_t **temp = head; // Pointer to the head pointer.

    if (temp != NULL)
    {
        while (*head != NULL)
        {
            cursor = *head; // Store the current head in 'cursor'.
            free(cursor);   // Free the memory of the current node.
            *head = (*head)->next; // Move the head to the next node.
        }

        *temp = NULL; // Set the original head pointer to NULL.
    }
}
