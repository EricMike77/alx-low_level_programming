listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL, *current = *head;

    while (current != NULL)
    {
        listint_t *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
    return *head;
}