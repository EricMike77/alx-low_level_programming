#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the first node in the list.
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int data;

    if (*head == NULL)
        return (0);

    tmp = *head;
    *head = (*head)->next;
    data = tmp->n;
    free(tmp);

    return (data);
}
