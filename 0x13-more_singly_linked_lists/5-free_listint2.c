#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets head to NULL.
 * @head: Pointer to pointer to the first element of the list.
 */
void free_listint2(listint_t **head)
{
    listint_t *current, *next;

    if (head == NULL)
        return;

    current = *head;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}
