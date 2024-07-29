#include "lists.h"
/**
 * list_len - Return the number of elements in list_t list.
 * @h: Pointer to the list_t list.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
int i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
