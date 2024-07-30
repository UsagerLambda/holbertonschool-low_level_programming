#include "lists.h"
/**
 * print_dlistint - Print all the elements of the doubly linked list
 * @h: Pointer to the head of the doubly linked list
 * Return: The total number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
