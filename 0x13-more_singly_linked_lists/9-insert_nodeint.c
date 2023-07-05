#include "lists.h"

/**
 * insert_nodeint_at_index - (inserts a new node in a linked list),
 * at a given position
 * @head: A pointer to the first node in the list
 * @idx: An index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: A pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *new1;
	listint_t *temp = *head;

	new1 = malloc(sizeof(listint_t));
	if (!new1 || !head)
		return (NULL);

	new1->n = n;
	new1->next = NULL;

	if (idx == 0)
	{
		new1->next = *head;
		*head = new1;
		return (new1);
	}

	for (p = 0; temp && p < idx; p++)
	{
		if (p == idx - 1)
		{
			new1->next = temp->next;
			temp->next = new1;
			return (new1);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

