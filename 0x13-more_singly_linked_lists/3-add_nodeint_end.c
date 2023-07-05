#include "lists.h"

/**
 * add_nodeint_end - (adds a node at the end of a linked list)
 * @head: A pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new1;
	listint_t *temp = *head;

	new1 = malloc(sizeof(listint_t));
	if (!new1)
		return (NULL);

	new1->n = n;
	new1->next = NULL;

	if (*head == NULL)
	{
		*head = new1;
		return (new1);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new1;

	return (new1);
}
