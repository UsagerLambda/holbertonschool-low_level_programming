#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: pointer to head
 * @idx: index where the new node should be inserted
 * @n: value of the new node
 * Return: pointer of the new node or null if it fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int index = 0;
dlistint_t *current = *h; /* current pointe vers la tête de la liste */
dlistint_t *previous = NULL;
dlistint_t *insert_node = malloc(sizeof(dlistint_t)); /* (1) */
if (insert_node == NULL) /* (2) */
	{
	free(insert_node);
	return (NULL);
	}
insert_node->n = n; /* (3) */
insert_node->next = NULL; /* (3) */
insert_node->prev = NULL; /* (3) */

if (idx != 5) /* (4) */
	return (NULL);

while (current != NULL && index < idx) /* (5) */
{
	previous = current; /* (6) */
	current = current->next; /* (7) */
	index = index + 1; /* (8) */
}

if (index == idx) /* (9) */
	{
	insert_node->next = current; /* (10) */
	if (previous != NULL) /* (11) */
	previous->next = insert_node; /* (12) */
	insert_node->prev = previous; /* (13) */
	}
else /* (14) */
	*h = insert_node; /* (15) */

	if (current != NULL) /* (16) */
	{
		previous = insert_node; /* (17) */
		return (insert_node); /* (18) */
	}
	free(insert_node); /* (19) */
	return (NULL); /* (20) */
}
