#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL
 * @head: Pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
    listint_t *cursor;
    listint_t **temp = head;

    if (temp != NULL)
    {
        while (*head != NULL)
        {
            cursor = *head;
            free(cursor);
            *head = (*head)->next;
        }

        *temp = NULL;
    }
}
