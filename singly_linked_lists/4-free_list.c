#include "lists.h"
/**
 * free_list - Free list_t
 * @head: pointer to the head of list_t
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head; /* affecte head à temp */
head = head->next; /* déplace head au node suivant */
free(temp->str); /* libère la mémoire du node temp->str */
free(temp); /* libère le node */
}
}
