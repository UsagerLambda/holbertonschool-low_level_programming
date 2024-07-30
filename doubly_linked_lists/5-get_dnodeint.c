#include "lists.h"
/**
 * get_dnodeint_at_index - Return the number of node of the list
 * @head: Pointer to the head of the list
 * @index: index of the node to return, start from 0
 * Return: Pointer to the node at the specified index or NULL if it not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head; /* pointe current vers le 1er node de la liste */
unsigned int i = 0; /* compteur */

while (current != NULL) /* parcourt current tant que celui-ci n'est pas NULL */
{
if (i == index) /* si i == index */
return (current); /* retourne le pointeur current */
current = current->next; /* puis avance au node suivant */
i += 1; /* incrémente i */
}
return (NULL); /* si le index du node n'existe pas retourne NULL */
}
