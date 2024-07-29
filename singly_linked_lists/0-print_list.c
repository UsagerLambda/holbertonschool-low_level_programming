#include "lists.h"

/**
 * print_list - Entry point
 * @h: Stanby
 * Return: Standby
 */
size_t print_list(const list_t *h)
{
int i = 0;
while (h != NULL)
{
printf("[%d] %s\n", i, h->str);
h = h->next;
i++;
}
return (i);
}
