#include "lists.h"
/**
 * dlistint_len - Returns the number of elements of the doubly linked list
 * @h: Pointer to the end of the doubly linked list
 * Return: The total number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
