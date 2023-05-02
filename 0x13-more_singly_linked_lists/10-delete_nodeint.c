#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *prev;
    unsigned int i;

    if (*head == NULL) /* Check if the list is empty */
        return (-1);

    if (index == 0) /* Special case: delete the first node */
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    /* Traverse the list to find the node to be deleted */
    prev = *head;
    temp = prev->next;
    for (i = 1; temp != NULL && i < index; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) /* Check if the index is out of range */
        return (-1);

    /* Remove the node from the list and free its memory */
    prev->next = temp->next;
    free(temp);

    return (1);
}
